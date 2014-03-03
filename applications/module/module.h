#ifndef SUBWINDLL_H
#define SUBWINDLL_H
#include "ui_module.h"

class Module : public QMainWindow, public Ui_Module
{
	Q_OBJECT

public:
	Module(QWidget * parent = 0, Qt::WindowFlags f = 0);
	~Module();

private:
	void init();
	void destroy();

private slots:
	void wUseClicked();
};
#endif
