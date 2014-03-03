#ifndef MAINWIN_H
#define MAINWIN_H

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow, public Ui_MainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget * parent = 0, Qt::WindowFlags f = 0);
	~MainWindow();

private slots:
	void wOpenClicked();
	void wUseClicked();

private:
	void init();
	void destroy();
};
#endif
