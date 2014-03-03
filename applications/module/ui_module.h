/********************************************************************************
** Form generated from reading UI file 'module.ui'
**
** Created: Wed Jan 22 14:28:13 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_H
#define UI_MODULE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Module
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *wUse;

    void setupUi(QMainWindow *Module)
    {
        if (Module->objectName().isEmpty())
            Module->setObjectName(QString::fromUtf8("Module"));
        Module->resize(460, 389);
        centralwidget = new QWidget(Module);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        wUse = new QPushButton(centralwidget);
        wUse->setObjectName(QString::fromUtf8("wUse"));

        gridLayout->addWidget(wUse, 0, 0, 1, 1);

        Module->setCentralWidget(centralwidget);

        retranslateUi(Module);
        QObject::connect(wUse, SIGNAL(clicked()), Module, SLOT(wUseClicked()));

        QMetaObject::connectSlotsByName(Module);
    } // setupUi

    void retranslateUi(QMainWindow *Module)
    {
        Module->setWindowTitle(QApplication::translate("Module", "MainWindow", 0, QApplication::UnicodeUTF8));
        wUse->setText(QApplication::translate("Module", "UseMethod", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Module: public Ui_Module {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_H
