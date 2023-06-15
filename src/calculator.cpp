#include "calculator.h"

CallerMainWindow::CallerMainWindow(QWidget* parent) : QMainWindow(parent){}

void CallerMainWindow::plus()
{
    if(!lineEdit_2->text().isEmpty() && !lineEdit_3->text().isEmpty())
        lineEdit->setText(QString::number(lineEdit_2->text().toInt() + lineEdit_3->text().toInt()));
    else
        lineEdit->setText("");
}

void CallerMainWindow::minus()
{
    if(!lineEdit_2->text().isEmpty() && !lineEdit_3->text().isEmpty())
        lineEdit->setText(QString::number(lineEdit_2->text().toInt() - lineEdit_3->text().toInt()));
    else
        lineEdit->setText("");
}

void CallerMainWindow::multiply()
{
    if(!lineEdit_2->text().isEmpty() && !lineEdit_3->text().isEmpty())
        lineEdit->setText(QString::number(lineEdit_2->text().toInt() * lineEdit_3->text().toInt()));
    else
        lineEdit->setText("");
}

void CallerMainWindow::share()
{
    if(lineEdit_3->text().toInt() == 0 && !lineEdit_2->text().isEmpty())
        lineEdit->setText("ERROR");
    else if(!lineEdit_2->text().isEmpty() && !lineEdit_3->text().isEmpty())
        lineEdit->setText(QString::number(lineEdit_2->text().toInt() / lineEdit_3->text().toInt()));
    else
        lineEdit->setText("");
}
