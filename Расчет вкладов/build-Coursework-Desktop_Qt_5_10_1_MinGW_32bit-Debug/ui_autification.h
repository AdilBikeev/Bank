/********************************************************************************
** Form generated from reading UI file 'autification.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTIFICATION_H
#define UI_AUTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
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

class Ui_Autification
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *login;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Autification)
    {
        if (Autification->objectName().isEmpty())
            Autification->setObjectName(QStringLiteral("Autification"));
        Autification->resize(334, 140);
        action = new QAction(Autification);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(Autification);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        login = new QLineEdit(centralwidget);
        login->setObjectName(QStringLiteral("login"));

        gridLayout->addWidget(login, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(centralwidget);
        password->setObjectName(QStringLiteral("password"));

        gridLayout->addWidget(password, 1, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        Autification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Autification);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 334, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Autification->setMenuBar(menubar);
        statusbar = new QStatusBar(Autification);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Autification->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Autification);

        QMetaObject::connectSlotsByName(Autification);
    } // setupUi

    void retranslateUi(QMainWindow *Autification)
    {
        Autification->setWindowTitle(QApplication::translate("Autification", "MainWindow", nullptr));
        action->setText(QApplication::translate("Autification", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QApplication::translate("Autification", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Autification", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("Autification", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        menu->setTitle(QApplication::translate("Autification", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autification: public Ui_Autification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTIFICATION_H
