#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_valueChanged()
{
    int pos = ui->horizontalSlider->value()*10;
    QString str = QString("%1").arg(pos);
    ui->lineEdit->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    QString lineEditValue = ui->lineEdit->text();
    double value = lineEditValue.toDouble();
    if (value == 0) {
        ui->lineEdit_2->setText("除数不能为0");
        return;
    }
    QString process = "0.8 / " + lineEditValue + " = ";
    double result = 0.8 / value;
    QString resultStr = QString::number(result);
    ui->lineEdit_2->setText(process + resultStr);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString lineEditValue = ui->lineEdit->text();
    double value = lineEditValue.toDouble();
    if (value == 0) {
        ui->lineEdit_2->setText("除数不能为0");
        return;
    }
    QString process = "(2 / 3) /  " + lineEditValue + " = ";
    double result = (2.0 / 3.0) / value;
    QString resultStr = QString::number(result);
    ui->lineEdit_2->setText(process + resultStr);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString lineEditValue = ui->lineEdit->text();
    double value = lineEditValue.toDouble();
    if (value == 0) {
        ui->lineEdit_2->setText("除数不能为0");
        return;
    }
    QString process = "(3 / 3) /  " + lineEditValue + " = ";
    double result = 1.0 / value;
    QString resultStr = QString::number(result);
    ui->lineEdit_2->setText(process + resultStr);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString lineEditValue = ui->lineEdit->text();
    double value = lineEditValue.toDouble();
    if (value == 0) {
        ui->lineEdit_2->setText("除数不能为0");
        return;
    }
    QString process = "(4 / 5) /  " + lineEditValue + " = ";
    double result = (4.0 / 5.0) / value;
    QString resultStr = QString::number(result);
    ui->lineEdit_2->setText(process + resultStr);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString lineEditValue = ui->lineEdit->text();
    double value = lineEditValue.toDouble();
    if (value == 0) {
        ui->lineEdit_2->setText("除数不能为0");
        return;
    }
    QString process = "(5 / 5) /  " + lineEditValue + " = ";
    double result = 1.0 / value;
    QString resultStr = QString::number(result);
    ui->lineEdit_2->setText(process + resultStr);
}
