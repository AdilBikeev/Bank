#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contribution.h"
#include "autification.h"
#include "authorization.h"
#include <QMessageBox>
#include <QDebug>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Contribution *con = new Contribution;

     con->show();
}

void MainWindow::on_action_triggered()
{
    close();
}



void MainWindow::on_registration_clicked()
{
    Autification *aut = new Autification;
    aut->show();
}

void MainWindow::on_login_clicked()
{
        Authorization *log = new Authorization;
        log->show();
}
