/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *login;
    QLineEdit *password;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QStringLiteral("Authorization"));
        Authorization->resize(394, 170);
        action = new QAction(Authorization);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(Authorization);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 91, 31));
        login = new QLineEdit(centralwidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(100, 19, 281, 21));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(100, 60, 281, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 90, 101, 31));
        Authorization->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Authorization);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Authorization->setMenuBar(menubar);
        statusbar = new QStatusBar(Authorization);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Authorization->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QMainWindow *Authorization)
    {
        Authorization->setWindowTitle(QApplication::translate("Authorization", "MainWindow", nullptr));
        action->setText(QApplication::translate("Authorization", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QApplication::translate("Authorization", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Authorization", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("Authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        menu->setTitle(QApplication::translate("Authorization", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
