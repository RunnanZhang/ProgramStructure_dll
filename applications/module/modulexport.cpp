#include "module.h"
#include "vld.h"
class QWidget;

extern "C" void __declspec(dllexport) RNEXPORT(QWidget*);

void RNEXPORT(QWidget *parent)
{
	//���ַ�ʽҲ���Ա�֤���ڴ�й¶�����Ǳ����������رղſ����ͷ�ģ���ڴ档
	//Module *pW = new Module(parent);
	Module *pW = new Module(NULL);
	pW->setAttribute(Qt::WA_DeleteOnClose);
	pW->show();
}
