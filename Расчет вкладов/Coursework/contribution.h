#ifndef CONTRIBUTION_H
#define CONTRIBUTION_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class Contribution;
}

class Contribution : public QMainWindow
{
    Q_OBJECT

public:
    double today_contribution;//������� ������ ������
    double percent;//���������� ������
    double term;//���� �������� ������
    int month;//�����, ����� ���� ������� ���. �����
    bool change;//�������� � ��������� ������ � �������
    double table_return[50][50];//������ ���������� �������� �������
    explicit Contribution(QWidget *parent = 0);
    ~Contribution();

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

    void on_Sbros_clicked();

    void on_result_clicked();

    void on_primeni_clicked();

    void on_action_4_triggered();


    void on_action_3_triggered();

private:
    double sum();//������� ������� � ��������� ������������� ���������
    void sbros();//���������� ��� �������� ������
    void table();//������� �������
    void vvod_return();//
    Ui::Contribution *ui;
    QStandardItemModel *model;
};

#endif // CONTRIBUTION_H
