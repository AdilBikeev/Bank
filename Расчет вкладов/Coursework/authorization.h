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
    QString arr_password[100];//������ �������
    QString arr_login[100];//������ �������
    QString data[100];//������ ������ � ����� txt
    explicit Authorization(QWidget *parent = 0);
    ~Authorization();

private slots:
    void on_action_triggered();

    void on_pushButton_clicked();

private:
    void add_information(int N);//��������� ���������� � ������ ������������ � �������
    int check(int N);//������� ���� �� ����� ������������ � ��
    Ui::Authorization *ui;
};

#endif // AUTHORIZATION_H
