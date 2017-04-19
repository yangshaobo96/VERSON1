
#include "ICAN4055.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ICAN4055 w;
	w.show();
	return a.exec();
}
