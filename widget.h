#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <iostream>
#include <sstream>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    stringstream ss;
    int x = 0;
    int y = 0;
    int result = 0;
    int flag = 0;
    int op_flag = 0;
    int result_flag = 0;

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_reset_clicked();

    void on_pushButton_di_clicked();

    void on_pushButton_mu_clicked();

    void on_pushButton_mi_clicked();

    void on_pushButton_pl_clicked();

    void on_pushButton_eq_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
