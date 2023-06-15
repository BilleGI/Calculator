#pragma once
#include<QMainWindow>
#include <QtWidgets/QLineEdit>

class CallerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit *lineEdit_3 = nullptr;
    QLineEdit *lineEdit_2 = nullptr;
    QLineEdit *lineEdit = nullptr;
    CallerMainWindow(QWidget* parent);
public slots:
    void plus();
    void minus();
    void multiply();
    void share();
};
