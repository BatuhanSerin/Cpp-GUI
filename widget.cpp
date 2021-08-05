#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    ui->label->setText(QString::number(x));
}

Widget::~Widget()
{
    delete ui;
}




void Widget::on_pushButton_10_clicked()
{
    if (result_flag == 1){
        on_pushButton_reset_clicked();
    }
    if (flag == 0){
        x = x * 10;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10;
        ui->label->setText(ui->label->text() + QString::number(0));
    }


}


void Widget::on_pushButton_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 1;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 1;
        ui->label->setText(ui->label->text() + QString::number(1));
    }

}


void Widget::on_pushButton_2_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 2;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 2;
        ui->label->setText(ui->label->text() + QString::number(2));
    }



}


void Widget::on_pushButton_3_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 3;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 3;
        ui->label->setText(ui->label->text() + QString::number(3));
    }

}


void Widget::on_pushButton_4_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 4;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 4;
        ui->label->setText(ui->label->text() + QString::number(4));
    }

}


void Widget::on_pushButton_5_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 5;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 5;
        ui->label->setText(ui->label->text() + QString::number(5));
    }

}


void Widget::on_pushButton_6_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 6;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 6;
        ui->label->setText(ui->label->text() + QString::number(6));
    }


}


void Widget::on_pushButton_7_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 7;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 7;
        ui->label->setText(ui->label->text() + QString::number(7));
    }

}


void Widget::on_pushButton_8_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 8;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 8;
        ui->label->setText(ui->label->text() + QString::number(8));
    }


}


void Widget::on_pushButton_9_clicked()
{
    if (result_flag == 1){
            on_pushButton_reset_clicked();
        }
    if (flag == 0){
        x = x * 10 + 9;
        ui->label->setText(QString::number(x));
    }
    else {
        y = y * 10 + 9;
        ui->label->setText(ui->label->text() + QString::number(9));
    }


}


void Widget::on_pushButton_reset_clicked()
{
    x = 0;
    y = 0;

    op_flag = 0;
    result_flag = 0;
    flag = 0;


    ui->label->setText(QString::number(x));
}


void Widget::on_pushButton_di_clicked()
{
    if(flag != 1){
    flag = 1;
    op_flag = 4;
    ui->label->setText(ui->label->text() + " / ");
    }
}


void Widget::on_pushButton_mu_clicked()
{
    if(flag != 1){
    flag = 1;
    op_flag = 3;
    ui->label->setText(ui->label->text() + " * ");
    }
}


void Widget::on_pushButton_mi_clicked()
{
    if(flag != 1){
    flag = 1;
    op_flag = 2;
    ui->label->setText(ui->label->text() + " - ");
    }
}


void Widget::on_pushButton_pl_clicked()
{
    if(flag != 1){
    flag = 1;
    op_flag = 1;
    ui->label->setText(ui->label->text() + " + ");
    }
}


void Widget::on_pushButton_eq_clicked()
{
    if(op_flag == 1){
        result = x + y;
    }
    else if(op_flag == 2){
        result = x - y;
    }
    else if(op_flag == 3){
        result = x * y;
    }
    else if(op_flag == 4){
        result = x / y;
    }
    ui->label->setText(ui->label->text() + " = " + QString::number(result));
    result_flag = 1;
}








