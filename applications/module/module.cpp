#include "module.h"
#include "method.h"

Module::Module(QWidget * parent, Qt::WindowFlags f)
:QMainWindow(parent, f), Ui_Module()
{
	setupUi(this);
	init();
}

Module::~Module()
{
	destroy();
}

void Module::init()
{

}

void Module::destroy()
{

}

void Module::wUseClicked()
{
	Method me;
	me.methodShow(this);
}

