#include "module.h"
#include "vld.h"
class QWidget;

extern "C" void __declspec(dllexport) RNEXPORT(QWidget*);

void RNEXPORT(QWidget *parent)
{
	//此种方式也可以保证无内存泄露，但是必须等主程序关闭才可以释放模块内存。
	//Module *pW = new Module(parent);
	Module *pW = new Module(NULL);
	pW->setAttribute(Qt::WA_DeleteOnClose);
	pW->show();
}
