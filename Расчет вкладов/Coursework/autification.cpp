#include "autification.h"
#include "ui_autification.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>//для записи в файл текста
#include <QString>
#include <QTextCodec>
#include <QByteArray>//для хранения данных с файла

Autification::Autification(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Autification)
{
    ui->setupUi(this);
}

Autification::~Autification()
{
    delete ui;
}


void Autification::on_pushButton_clicked()
{
    if(ui->login->text() != ""&&ui->password->text()!=""){//если данные введенны
        QFile file("Test.txt");
        if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){//записываем данные
            QTextStream write(&file);
            write<<"Login:"<<ui->login->text()<<" Password:"<<ui->password->text()<<" sum:0"<<"\n";
            file.close();
            QMessageBox::information(this, "Регистрация", "Регистрация успешно пройдена !");
            this->close();
        }
    }else{
        QMessageBox::critical(this, "Регистрация", "Ошибка !\nВы не ввели Логин или пароль !");
    }
}



void Autification::on_action_triggered()
{
    MainWindow *main = new MainWindow;
    main->show();
    close();
}
