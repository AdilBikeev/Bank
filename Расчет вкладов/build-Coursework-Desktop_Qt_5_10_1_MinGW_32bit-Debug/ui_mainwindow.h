/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *registration;
    QPushButton *login;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(799, 505);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 801, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/rec/images/\321\204\320\276\320\275_\320\270\320\263\321\200\321\213.jpg")));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 50, 291, 121));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/images/\321\201\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(380, 200));
        registration = new QPushButton(centralWidget);
        registration->setObjectName(QStringLiteral("registration"));
        registration->setGeometry(QRect(340, 280, 121, 51));
        registration->setAutoFillBackground(false);
        registration->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:1 rgba(64, 165, 207, 255));"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/images/\320\232\320\275\320\276\320\277\320\272\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        registration->setIcon(icon1);
        registration->setIconSize(QSize(360, 55));
        login = new QPushButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(710, 0, 91, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/images/\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon2);
        login->setIconSize(QSize(710, 70));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        registration->setText(QString());
        login->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
