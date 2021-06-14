#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QFile"
#include "QTextStream"
#include "QtDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    ui->lineEdit->setText(" ");

}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->label_5->setText(arg1);

}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg2)
{
    ui->label_7->setText(arg2);
}

void MainWindow::on_pushButton_2_clicked()
{

    ui->lineEdit_2->setText(" ");
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    ui->label->setText(ui->label_5->text());
    ui->label_2->setText(ui->label_7->text());

}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    ui->label_2->setText(ui->label_5->text());
    ui->label->setText(ui->label_7->text());
}

void MainWindow::on_pushButton_3_clicked()
{
    QFile DOSYA("kayit.txt");
    DOSYA.open(QIODevice::WriteOnly);
    QTextStream KAYIT(&DOSYA);
    KAYIT<<ui->label->text()<<endl;
    KAYIT<<ui->label_2->text()<<endl;
    KAYIT<<"dosya sonu"<<endl;
    DOSYA.close();
    qDebug()<<ui->label->text()<<endl<<ui->label_2->text()<<endl<<"dosya sonu"<<endl;
}
