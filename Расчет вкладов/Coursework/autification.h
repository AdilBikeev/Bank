#ifndef AUTIFICATION_H
#define AUTIFICATION_H

#include <QMainWindow>

namespace Ui {
class Autification;
}

class Autification : public QMainWindow
{
    Q_OBJECT

public:
    explicit Autification(QWidget *parent = 0);
    ~Autification();

private slots:
    void on_pushButton_clicked();

    void on_action_triggered();

private:
    Ui::Autification *ui;
};

#endif // AUTIFICATION_H
