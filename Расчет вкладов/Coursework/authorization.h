#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class Authorization;
}

class Authorization : public QMainWindow
{
    Q_OBJECT

public:
    QString arr_password[100];//массив паролей
    QString arr_login[100];//массив логинов
    QString data[100];//хранит строку с файла txt
    explicit Authorization(QWidget *parent = 0);
    ~Authorization();

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

private:
    void add_information(int N);//дабовляет информацию о каждом пользователе в массивы
    int check(int N);//сверяет есть ли такой пользователь в БД
    Ui::Authorization *ui;
};

#endif // AUTHORIZATION_H
