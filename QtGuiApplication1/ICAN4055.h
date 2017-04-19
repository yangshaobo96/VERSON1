#pragma once
#include "StdAfx.h"
#include <QtWidgets/QDialog>
#include "ui_ICAN4055.h"
#include <QString>
#include <cstring>
#include <string>
#include <QMessageBox>
#include <QTimer>
#include <QRegExp>
#include <QRegExpValidator>
using namespace std;
class ICAN4055 : public QDialog
{
	Q_OBJECT

public:
	ICAN4055(QWidget *parent = Q_NULLPTR);
	uint8_t buf[1];
	uint8_t recbuf[1];
	uint64_t len;
	int out_value;
	int count;
	CString str;
	QTimer t;
public slots:
	void btn_Start_CAN(void);
	void btn_Change(void);
	void btn_Link_CAN(void);
	void react_Timer(void);
	void react_TextChange(void);
private:
	Ui::ICAN4055Class ui;
};
