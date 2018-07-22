/********************************************************************************
** Form generated from reading UI file 'valute.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUTE_H
#define UI_VALUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valute
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Valute)
    {
        if (Valute->objectName().isEmpty())
            Valute->setObjectName(QStringLiteral("Valute"));
        Valute->resize(800, 600);
        centralwidget = new QWidget(Valute);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 50, 401, 221));
        Valute->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Valute);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Valute->setMenuBar(menubar);
        statusbar = new QStatusBar(Valute);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Valute->setStatusBar(statusbar);

        retranslateUi(Valute);

        QMetaObject::connectSlotsByName(Valute);
    } // setupUi

    void retranslateUi(QMainWindow *Valute)
    {
        Valute->setWindowTitle(QApplication::translate("Valute", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valute: public Ui_Valute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUTE_H
