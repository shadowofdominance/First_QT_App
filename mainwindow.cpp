#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Reduced the repeated code and created this function in order to handle the calculations!
void MainWindow::calculate(char op)
{
    int FirstNumber = ui->LineEditFirst->text().toInt();
    int SecondNumber = ui->LineEditSecond->text().toInt();
    int result = 0;

    switch(op)
    {
    case '+': result = FirstNumber + SecondNumber; break;
    case '-': result = FirstNumber - SecondNumber; break;
    case '*': result = FirstNumber * SecondNumber; break;
    case '/':
        if(SecondNumber != 0)
            result = FirstNumber / SecondNumber;
        else {
            ui->LineEditResult->setText("Error");
            return;
        }
        break;
    }

    ui->LineEditResult->setText(QString::number(result));
}

void MainWindow::on_ButtonAdd_clicked()
{
    calculate('+');
}

void MainWindow::on_ButtonSubtract_clicked()
{
    calculate('-');
}

void MainWindow::on_ButtonMultiply_clicked()
{
    calculate('*');
}

void MainWindow::on_ButtonDivide_clicked()
{
    calculate('/');
}
