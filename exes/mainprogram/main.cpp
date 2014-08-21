#include "mainwindow.h"
#include <QApplication>

int main(int argc ,char** argv)
{
	QApplication app(argc, argv);
	MainWindow Dlg;
	Dlg.show();
	return app.exec();
}