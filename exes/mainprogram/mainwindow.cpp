#include "mainwindow.h"
#include <QLibrary>
#include "method.h"

MainWindow::MainWindow(QWidget * parent, Qt::WindowFlags f)
:QMainWindow(parent, f), Ui_MainWindow()
{
	setupUi(this);
	init();
}

MainWindow::~MainWindow()
{
	destroy();
}

void MainWindow::init()
{

}

void MainWindow::destroy()
{

}

void MainWindow::wOpenClicked()
{
	QLibrary myLib("..//..//lib//module");
	typedef void (*MyPrototype)(QWidget *);
	MyPrototype myFunction = (MyPrototype) myLib.resolve("RNEXPORT");
	if (myFunction)
		myFunction(this);
}

void MainWindow::wUseClicked()
{
	Method me;
	me.methodShow(this);
}

