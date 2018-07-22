#include "authorization.h"
#include "ui_authorization.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QTextStream>//для записи в файл текста
#include <QString>
#include <QTextCodec>
#include <QByteArray>//для хранения данных с файла

Authorization::Authorization(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Authorization)
{
    ui->setupUi(this);
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_action_triggered()
{
    MainWindow *main = new MainWindow;
    main->show();
    close();
}

void Authorization::on_pushButton_clicked()
{
    QFile file("Test.txt");
    QString str;
  if(ui->login->text() != ""&&ui->password->text()!="")//если данные введенны
    {
        if(file.open(QIODevice::ReadOnly))
        {
            //считываем данные
            QTextStream stream(&file);
          int i=0;//номер пользователя
            while (!stream.atEnd())
               {
                   str = stream.readLine();
                  data[i] = str;//запоминаем информацию об i-ом пользователе в массив данных
                  i++;
                   qDebug() << str;
               }
            add_information(i);//заполняем информацию о пользователях
            file.close();
            if( check(i) )//проверяем наличие данного пользователя в БД
            {
                QMessageBox::information(this, "Авторизация", "Авторизация прошла успешно !");
                 this->close();
            }else{
                QMessageBox::critical(this,"Ошибка авторизации", "Вы неверно ввели логин или пароль");
            }
        }
    }else
    {
        QMessageBox::critical(this,"Ошибка авторизации", "Вы не ввели логин/пароль");
    }
}

void Authorization::add_information(int N)//заполняем информауцию о каждом пользователе в массивы
{
    QString str="";//для хранения информации о пользователе
    QString inf="";//для хранения логина или пароля
    for(int i=0;i<N;i++)//пробегаемся по каждому пользователю
    {
        str = data[i];
        for(int j=0;j<str.length();j++)//просматриваем всю информацию о пользователе
        {
            if(arr_login[i]==""&&str[j] == ":")//если логин пользователя не был запомнен, то...
            {
                j++;
                while(str[j]!=" ")
                {
                    arr_login[i] += str[j];//запоминаем логин пользователя
                    j++;
                }
            }else if(arr_password[i]==""&&str[j] == ":")//если пароль пользователя не был запомнен , то
            {
                j++;
                while(str[j]!=" ")
                {
                    arr_password[i] += str[j];//запоминаем логин пользователя
                    j++;
                }
                break;
            }
        }
        qDebug()<<"Логин: "<<arr_login[i]<<"Пароль: "<<arr_password[i];
    }
}

int Authorization::check(int N)
{
    for(int i=0;i<N;i++)
    {
        if(arr_login[i]==ui->login->text()&&arr_password[i]==ui->password->text()) return 1;//если данный пользователь имеется в БД, то возвращаем 1
    }
    return 0;
}
