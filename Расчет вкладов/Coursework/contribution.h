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
    double today_contribution;//текущий размер вклада
    double percent;//процентна€ ставка
    double term;//срок хранени€ вклада
    int month;//мес€ц, когда была внесена доп. сумма
    bool change;//првоерка а изменени€ данных в табилце
    double table_return[50][50];//хранит предыдущие значени€ таблицы
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
    double sum();//создает таблицу и вычисл€ет окончательный результат
    void sbros();//сбрасывает все веденные данные
    void table();//создает таблицу
    void vvod_return();//
    Ui::Contribution *ui;
    QStandardItemModel *model;
};

#endif // CONTRIBUTION_H
