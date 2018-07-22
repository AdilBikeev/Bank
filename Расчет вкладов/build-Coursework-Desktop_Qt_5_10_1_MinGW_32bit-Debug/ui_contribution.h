/********************************************************************************
** Form generated from reading UI file 'contribution.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRIBUTION_H
#define UI_CONTRIBUTION_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contribution
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QAction *action_3;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *today_contribution;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *term;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *interest_rate;
    QPushButton *result;
    QLineEdit *future_contribution;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *Sbros;
    QTableView *tableView;
    QPushButton *primeni;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Contribution)
    {
        if (Contribution->objectName().isEmpty())
            Contribution->setObjectName(QStringLiteral("Contribution"));
        Contribution->resize(800, 638);
        action = new QAction(Contribution);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(Contribution);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_4 = new QAction(Contribution);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_3 = new QAction(Contribution);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralwidget = new QWidget(Contribution);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-20, 0, 821, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/rec/images/\321\201\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260(\321\204\320\276\320\275) \342\200\224 \320\272\320\276\320\277\320\270\321\217.jpg")));
        today_contribution = new QLineEdit(centralwidget);
        today_contribution->setObjectName(QStringLiteral("today_contribution"));
        today_contribution->setGeometry(QRect(150, 30, 261, 61));
        QFont font;
        font.setFamily(QStringLiteral("Magneto"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        today_contribution->setFont(font);
        today_contribution->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 30, 151, 61));
        label_2->setMouseTracking(true);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setWordWrap(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(490, 20, 261, 101));
        label_3->setMouseTracking(true);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setWordWrap(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-10, 250, 191, 61));
        label_4->setMouseTracking(true);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setWordWrap(false);
        term = new QLineEdit(centralwidget);
        term->setObjectName(QStringLiteral("term"));
        term->setGeometry(QRect(170, 250, 261, 61));
        term->setFont(font);
        term->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 250, 111, 61));
        label_5->setMouseTracking(true);
        label_5->setStyleSheet(QStringLiteral(""));
        label_5->setWordWrap(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 140, 191, 61));
        label_6->setMouseTracking(true);
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setWordWrap(false);
        interest_rate = new QLineEdit(centralwidget);
        interest_rate->setObjectName(QStringLiteral("interest_rate"));
        interest_rate->setGeometry(QRect(190, 140, 261, 61));
        interest_rate->setFont(font);
        interest_rate->setAlignment(Qt::AlignCenter);
        result = new QPushButton(centralwidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(550, 180, 141, 41));
        result->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-image: url(:/rec/images/\321\204\320\276\320\275_\320\270\320\263\321\200\321\213.jpg);\n"
"border-color: rgb(0, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0.323864 rgba(255, 255, 255, 255), stop:0.335227 rgba(0, 18, 255, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:0.670455 rgba(255, 0, 0, 255));"));
        future_contribution = new QLineEdit(centralwidget);
        future_contribution->setObjectName(QStringLiteral("future_contribution"));
        future_contribution->setGeometry(QRect(490, 120, 261, 61));
        future_contribution->setFont(font);
        future_contribution->setAlignment(Qt::AlignCenter);
        future_contribution->setReadOnly(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(740, 120, 71, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Playbill"));
        label_7->setFont(font1);
        label_7->setMouseTracking(true);
        label_7->setStyleSheet(QStringLiteral(""));
        label_7->setWordWrap(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 30, 71, 61));
        label_8->setFont(font1);
        label_8->setMouseTracking(true);
        label_8->setStyleSheet(QStringLiteral(""));
        label_8->setWordWrap(false);
        Sbros = new QPushButton(centralwidget);
        Sbros->setObjectName(QStringLiteral("Sbros"));
        Sbros->setGeometry(QRect(660, 340, 141, 41));
        Sbros->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.306818 rgba(195, 207, 1, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 0);\n"
"background-image: url(:/rec/images/\321\204\320\276\320\275_\320\270\320\263\321\200\321\213.jpg);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 410, 451, 192));
        primeni = new QPushButton(centralwidget);
        primeni->setObjectName(QStringLiteral("primeni"));
        primeni->setGeometry(QRect(470, 540, 301, 61));
        primeni->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-image: url(:/rec/images/\321\204\320\276\320\275_\320\270\320\263\321\200\321\213.jpg);\n"
"border-color: rgb(0, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:0, y2:1, stop:0.323864 rgba(255, 255, 255, 255), stop:0.335227 rgba(0, 18, 255, 255), stop:0.339795 rgba(255, 0, 0, 255), stop:0.339799 rgba(255, 255, 255, 255), stop:0.662469 rgba(0, 0, 255, 255), stop:0.670455 rgba(255, 0, 0, 255));"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(640, 480, 151, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit->setFont(font2);
        lineEdit->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(470, 480, 131, 51));
        QFont font3;
        font3.setPointSize(26);
        spinBox->setFont(font3);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMinimum(2);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 420, 141, 61));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(630, 420, 161, 61));
        Contribution->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Contribution);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Contribution->setMenuBar(menubar);
        statusbar = new QStatusBar(Contribution);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Contribution->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_4);
        menu->addAction(action_2);
        menu->addAction(action);
        menu->addAction(action_3);

        retranslateUi(Contribution);

        QMetaObject::connectSlotsByName(Contribution);
    } // setupUi

    void retranslateUi(QMainWindow *Contribution)
    {
        Contribution->setWindowTitle(QApplication::translate("Contribution", "MainWindow", nullptr));
        action->setText(QApplication::translate("Contribution", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_2->setText(QApplication::translate("Contribution", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        action_4->setText(QApplication::translate("Contribution", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        action_3->setText(QApplication::translate("Contribution", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QString());
        today_contribution->setText(QString());
        label_2->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#71f809;\">\320\242\320\265\320\272\321\203\321\211\320\270\320\271 </span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#71f809;\">\321\200\320\260\320\267\320\274\320\265\321\200 \320\262\320\272\320\273\320\260\320\264\320\260</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#f31334;\">\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\272\320\273\320\260\320\264\320\260 \320\277\320\276\321\201\320\273\320\265</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#f31334;\">\320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\263\320\276 </span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#f31334;\">\321\201\321\200\320\276\320\272\320\260</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#1c2fff;\">\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\200\320\276\320\272 </span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#1c2fff;\">\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \320\262\320\272\320\273\320\260\320\264\320\260</span></p></body></html>", nullptr));
        term->setText(QString());
        label_5->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#eeb0eb;\">\320\234\320\265\321\201\321\217\321\206\320\265\320\262</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ffaa00;\">\320\243\320\272\320\260\320\266\320\270\321\202\320\265 % \321\201\321\202\320\260\320\262\320\272\321\203</span></p></body></html>", nullptr));
        interest_rate->setText(QString());
        result->setText(QApplication::translate("Contribution", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        future_contribution->setText(QString());
        label_7->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#f7eb3e;\">\320\240\321\203\320\261</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#55ffff;\">\320\240\321\203\320\261</span></p></body></html>", nullptr));
        Sbros->setText(QApplication::translate("Contribution", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        primeni->setText(QApplication::translate("Contribution", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        lineEdit->setText(QApplication::translate("Contribution", "0", nullptr));
        label_9->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#00ff00;\">\320\234\320\265\321\201\321\217\321\206 \320\262\320\275\320\265\321\201\320\265\320\275\320\270\321\217</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#00ff00;\">\320\262\320\272\320\273\320\260\320\264\320\260</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("Contribution", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#06a6ea;\">\320\241\321\203\320\274\320\274\320\260 \320\262\320\275\320\265\321\201\320\265\320\275\320\275\320\276\320\263\320\276</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#06a6ea;\">\320\262\320\272\320\273\320\260\320\264\320\260</span></p></body></html>", nullptr));
        menu->setTitle(QApplication::translate("Contribution", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contribution: public Ui_Contribution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRIBUTION_H
