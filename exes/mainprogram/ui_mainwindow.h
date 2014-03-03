/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Jan 22 14:29:56 2014
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *wOpen;
    QPushButton *wUse;
    QPushButton *wClose;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        wOpen = new QPushButton(centralwidget);
        wOpen->setObjectName(QString::fromUtf8("wOpen"));

        horizontalLayout->addWidget(wOpen);

        wUse = new QPushButton(centralwidget);
        wUse->setObjectName(QString::fromUtf8("wUse"));

        horizontalLayout->addWidget(wUse);

        wClose = new QPushButton(centralwidget);
        wClose->setObjectName(QString::fromUtf8("wClose"));

        horizontalLayout->addWidget(wClose);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(wOpen, SIGNAL(clicked()), MainWindow, SLOT(wOpenClicked()));
        QObject::connect(wClose, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(wUse, SIGNAL(clicked()), MainWindow, SLOT(wUseClicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        wOpen->setText(QApplication::translate("MainWindow", "OpenModule", 0, QApplication::UnicodeUTF8));
        wUse->setText(QApplication::translate("MainWindow", "UseMethod", 0, QApplication::UnicodeUTF8));
        wClose->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
