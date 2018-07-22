#include "contribution.h"
#include "ui_contribution.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <math.h>
#include <QStandardItemModel>
#include <QDebug>


Contribution::Contribution(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Contribution)
{


    ui->setupUi(this);
    ui->today_contribution->setReadOnly(false);
    ui->term->setReadOnly(false);
    ui->interest_rate->setReadOnly(false);

    ui->Sbros->setToolTip("РќР°Р¶РјРёС‚Рµ РЅР° РєРЅРѕРїРєСѓ РґР»СЏ \nСЃР±СЂРѕСЃР° РІСЃРµС… РІРІРµРґРµРЅРЅС‹С… Р·РЅР°С‡РµРЅРёР№");

}

Contribution::~Contribution()
{
    delete ui;
}

void Contribution::on_action_triggered()
{
    close();
}


double Contribution::sum(){
    double result = 0;
    table();
    QModelIndex index;
    QModelIndex copy_index;
    double znach;

    /////////////////////заполняет первую строку таблицы/////////////////////////////////////////

  index = model->index(0,1);

     model->setData(index, ui->today_contribution->text());
     index = model->index(0,1);
     model->setData(index, today_contribution * (percent-1));
     index = model->index(0,2);

     model->setData(index, today_contribution * percent);
    /////////////////////////////////////////////////////////////////////////////////////

     for(int i =1;i<model->rowCount();i++){//двигаемся по строкам
         for(int j = 0;j<model->columnCount();j++){//двигаемся по столбцам
             index = model->index(i,j);//запоминаем координаты элемента таблицы
             if(j==0){//в 1 -ую колонку записываем размер вклада на начало месяца
                if(i == 1){
                     model->setData(index, today_contribution*pow(percent, i));
                }else{
                   copy_index = model->index(i-1,2);
                   znach = (model->data(copy_index)).toDouble();
                   model->setData(index, znach);
                }
             }else if(j==1){//в 2 -ую колонку записываем велечину на которую вырастет вклад
                 copy_index = model->index(i,0);
                 znach = (model->data(copy_index)).toDouble();
                 model->setData(index, znach*(percent-1));
             }else if(j == 2){//в 3 -ую колонку записываем размер вклада после начисления процентов
                 copy_index = model->index(i-1,2);
                 znach = (model->data(copy_index)).toDouble();
                 model->setData(index, znach + znach*(percent-1));
             }
         }
     }
     result =  pow(percent, term);
     vvod_return();
    return result;
}

void Contribution::on_action_2_triggered()
{
    sbros();
}

void Contribution::sbros(){
    if(ui->future_contribution->text().toDouble()!=0){//если кнопка расчитать  была нажата, о таблица была создана
         QModelIndex index;
        for(int i=0;i<model->rowCount();i++){
            for(int j = 0;j<model->columnCount();j++){
                index = model->index(i,j);
                model->setData(index, "");//обнуляем таблицу
            }
        }
    }
    //сбрасываем всю информацию
    ui->today_contribution->setText("");
    ui->interest_rate->setText("");
    ui->term->setText("");
    ui->future_contribution->setText("");
    ui->today_contribution->setReadOnly(false);
    ui->term->setReadOnly(false);
    ui->interest_rate->setReadOnly(false);
    change = false;
}



void Contribution::on_Sbros_clicked()
{
    sbros();
}

void Contribution::on_result_clicked()//если нажали кнопку "расчитать"
{
    if(!change){//если таблица не была изменена
                today_contribution = ui->today_contribution->text().toInt(0,10);
                percent=ui->interest_rate->text().toInt(0,10);
                term = ui->term->text().toInt(0,10);

            if((today_contribution >0)&&(percent >0)&&(term >0)){//проверка на корректность веденных данных
                percent = 1 + 0.01*percent;//возрастающий коэффициент
                ui->future_contribution->setText(QString::number(today_contribution*sum()));
                ui->today_contribution->setReadOnly(true);
                ui->term->setReadOnly(true);
                ui->interest_rate->setReadOnly(true);
                vvod_return();
            }else{
                qDebug()<<"ERROR";
                QMessageBox::critical(this,"Ошибка", "Для начала сделайте коррекнтый ввод данных в поля");
                    sbros();
            }
    }
}
void Contribution::table(){
    model = new QStandardItemModel(term,3,this);//созадем таблицу размером tern x 3
    ui->spinBox->setMaximum(term);//устанавливаем верхнюю границу для spinbox
    ui->tableView->setModel(model);
    QModelIndex index;
    index = model->index(0,0);
    model->setData(index, ui->today_contribution->text());
     model->setHeaderData(0, Qt::Horizontal, "Размер вклада \nна начало месяца");
    model->setHeaderData(1, Qt::Horizontal, "Велечина на которую\nвозрастет вклад");
    model->setHeaderData(2, Qt::Horizontal, "Размер вклада\nна конец месяца");
}
void Contribution::on_primeni_clicked()
{
    if(ui->future_contribution->text().toDouble() != 0){

            QModelIndex index;
            QModelIndex copy_index;
            double znach;
            month = ui->spinBox->text().toInt(0,10);//запоминаем месяц в котором проводим изменения
            index = model->index(month-1,0);
            if( !(   (ui->lineEdit->text().toDouble() <0 ) && ( fabs(ui->lineEdit->text().toDouble()) > model->data(index).toDouble() )  ) ){//проверка на корректнось данных
                    vvod_return();
                    change = true;//запоминаем факт изменения таблицы
                    copy_index = index;
                    model->setData(index,model->data(index).toDouble() + ui->lineEdit->text().toDouble());
                    index = model->index(month-1,1);
                    model->setData(index, model->data(copy_index).toDouble()*(percent-1));
                    index = model->index(month-1,2);
                    model->setData(index, model->data(copy_index).toDouble()*percent);

                    for(int i =month;i<model->rowCount();i++){
                        for(int j = 0;j<model->columnCount();j++){
                            index = model->index(i,j);
                            if(j==0){
                               if(i == 1){
                                    model->setData(index, today_contribution*pow(percent, i));
                               }else{
                                  copy_index = model->index(i-1,2);
                                      znach = (model->data(copy_index)).toDouble();
                                      model->setData(index, znach);
                               }
                            }else if(j==1){
                                copy_index = model->index(i,0);
                                znach = (model->data(copy_index)).toDouble();
                                model->setData(index, znach*(percent-1));
                            }else if(j == 2){
                                copy_index = model->index(i,0);
                                znach = (model->data(copy_index)).toDouble();
                                model->setData(index, znach*percent);
                            }
                        }
                    }
                     ui->future_contribution->setText(QString::number(znach + znach*(percent-1)));
            }else{
                QMessageBox::critical(this,"Ошибка", "Вкладчик не может остаться в долгу перед банком !");
            }
    }else{
        QMessageBox::critical(this, "Ошибка", "Заполните для начала нужные поля, а затем нажмите кнопку \"Расчитать\" !");
    }
}

void Contribution::vvod_return(){

    QModelIndex index;


    for(int i = 0;i<model->rowCount();i++){
        for(int j =0;j<model->columnCount();j++){
            index = model->index(i,j);
            table_return[i][j] = model->data(index).toDouble();
                    qDebug()<<" table_return[i][j] = "<<table_return[i][j]<<" i ="<<i<<" j = "<<j;
        }
    }
                     qDebug()<<"\n\n\n";
}

void Contribution::on_action_4_triggered(){//возрат к предыдущим значениям
                QModelIndex index;
                if(ui->future_contribution->text().toDouble() != 0){
                    for(int i = 0;i<model->rowCount();i++){
                        for(int j =0;j<model->columnCount();j++){
                            index = model->index(i,j);
                            model->setData(index,table_return[i][j]);
                                            qDebug()<<" table_return[i][j] = "<<table_return[i][j]<<" i ="<<i<<" j = "<<j;
                        }
                    }
                    index = model->index(model->rowCount()-1,model->columnCount()-1);
                     ui->future_contribution->setText(QString::number(model->data(index).toDouble()));
                }else{
                    QMessageBox::critical(this, "Ошибка", " Заполните для начала нужные поля, а затем нажмите кнопку \"Расчитать\"!");
                }
}

void Contribution::on_action_3_triggered()
{
    MainWindow *main = new MainWindow;
    main->show();

    close();
}
