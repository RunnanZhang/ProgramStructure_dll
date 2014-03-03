#include "method.h"
#include <QMessageBox>

Method::Method()
{

}

Method::~Method()
{

}

void Method::methodShow(QWidget *pW)
{
	QMessageBox::warning(pW, "Hello", "This is my method in src !");
}