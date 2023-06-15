#include <iostream>
#include <QApplication>
#include "calculator.h"
#include "../include//ui_calculator.h"
#include <QIntValidator>


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    CallerMainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    caller.lineEdit_2->setValidator(new QIntValidator());
    caller.lineEdit_3->setValidator(new QIntValidator());
    window.lineEdit = caller.lineEdit;
    window.lineEdit_2 = caller.lineEdit_2;
    window.lineEdit_3 = caller.lineEdit_3;
    window.setMinimumSize(640,800);
    window.resize(640,800);
    window.setWindowTitle("Calculator");
    window.show();
    return app.exec();
}
