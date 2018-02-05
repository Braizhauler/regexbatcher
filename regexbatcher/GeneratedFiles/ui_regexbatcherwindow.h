/********************************************************************************
** Form generated from reading UI file 'regexbatcherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_regexbatcherWINDOW_H
#define UI_regexbatcherWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regexbatcherClass
{
public:
    QWidget *centralWidget;
    QTextEdit *txtEdit;
    QPushButton *btnCopyText;
    QTextBrowser *txtInspect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *regexbatcherClass)
    {
        if (regexbatcherClass->objectName().isEmpty())
            regexbatcherClass->setObjectName(QStringLiteral("regexbatcherClass"));
        regexbatcherClass->resize(1020, 712);
        centralWidget = new QWidget(regexbatcherClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(10, 160, 451, 421));
        btnCopyText = new QPushButton(centralWidget);
        btnCopyText->setObjectName(QStringLiteral("btnCopyText"));
        btnCopyText->setGeometry(QRect(470, 160, 75, 23));
        txtInspect = new QTextBrowser(centralWidget);
        txtInspect->setObjectName(QStringLiteral("txtInspect"));
        txtInspect->setGeometry(QRect(555, 160, 451, 431));
        regexbatcherClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(regexbatcherClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 21));
        regexbatcherClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(regexbatcherClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        regexbatcherClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(regexbatcherClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        regexbatcherClass->setStatusBar(statusBar);

        retranslateUi(regexbatcherClass);

        QMetaObject::connectSlotsByName(regexbatcherClass);
    } // setupUi

    void retranslateUi(QMainWindow *regexbatcherClass)
    {
        regexbatcherClass->setWindowTitle(QApplication::translate("regexbatcherClass", "regexbatcher", Q_NULLPTR));
        btnCopyText->setText(QApplication::translate("regexbatcherClass", "Copy Text", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regexbatcherClass: public Ui_regexbatcherClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_regexbatcherWINDOW_H
