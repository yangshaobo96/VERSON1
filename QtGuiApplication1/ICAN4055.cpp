#include "ICAN4055.h"
#include "icandllheader.h"
ROUTECFG cfg;
HANDLE hRoute = 0;
HANDLE hSlave4055 = 0;
ICAN4055::ICAN4055(QWidget *parent): QDialog(parent),t(this){
	ui.setupUi(this);
	ui._Link_CAN->setEnabled(false);
	ui._Change->setEnabled(false);
	ui.lineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9A-F]{2}")));
	setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
	connect(ui._Start_CAN, SIGNAL(clicked(bool)), this, SLOT(btn_Start_CAN(void)));
	connect(ui._Link_CAN, SIGNAL(clicked(bool)), this, SLOT(btn_Link_CAN(void)));
	connect(ui._Change, SIGNAL(clicked(bool)), this, SLOT(btn_Change(void)));
	connect(&t, SIGNAL(timeout()), this, SLOT(react_Timer(void)));
	buf[0] = 0;
	recbuf[0] = 0;
	count = 0;
	len = 0;
	str = "";
}
void ICAN4055::btn_Change(void){
	QString tmp = ui.lineEdit->text();
	QChar *c = tmp.begin();
	buf[0] = 0;
	while (c) {
		if (*c >= 'A') {
			buf[0] += c->toLatin1() - 'A' + 10;
			continue;
		}
		buf[0] += c->toLatin1() - '0';
		++c;
	}
	Slave_SendData(hSlave4055, 0x20, buf, 1);
}
void ICAN4055::btn_Link_CAN(void){
	Route_AddSlave(hRoute, 1, &hSlave4055);
	if (Slave_Connect(hSlave4055) != ICANOK) {
		QMessageBox::warning(this, tr("WARNING"), QString::fromLocal8Bit("4055连接失败"));
		return;
	}
	else {
		QMessageBox::about(this, tr("ABOUT"), QString::fromLocal8Bit("4055连接成功"));
		ui._Change->setEnabled(true);
		ui._Link_CAN->setEnabled(false);
		connect(ui.lineEdit, SIGNAL(textChanged(QString)), this, SLOT(react_TextChange(void)));
		t.start(1000);
	}
}
void ICAN4055::react_Timer(void){
	len = 1;
	Slave_GetDIData(hSlave4055, recbuf, (DWORD*)&len);
	str.Format((LPCWSTR)"%02x:%d", recbuf[0], count);
	QString tmp = QString::fromStdWString(str.GetString());
	ui.label_3->setText(tmp);
	str.Format((LPCWSTR)"%d:%d", recbuf[0], count);
	tmp = QString::fromStdWString(str.GetString());
	ui.label_7->setText(tmp);
	count++;
}
void ICAN4055::react_TextChange(void){
	ui._Change->setEnabled(ui.lineEdit->hasAcceptableInput());
}
void ICAN4055::btn_Start_CAN(void){
	cfg.iCardType = 4;
	cfg.iCardInd = 0;
	cfg.iCANInd = 0;
	cfg.wCANBaud = 0x001C;
	cfg.iMasterCycle = 500;
	cfg.wMasterID = 0;
	Mgr_AddRoute(cfg, &hRoute);
	if (Mgr_StartSys() != ICANOK) {
		QMessageBox::warning(this, tr("WARNING"), QString::fromLocal8Bit("系统启动失败"));
		return;
	}
	else {
		QMessageBox::about(this, tr("ABOUT"), QString::fromLocal8Bit("系统启动成功"));
		ui._Start_CAN->setEnabled(false);
		ui._Link_CAN->setEnabled(true);
	}
}