#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_4_clicked()
{
    ui->textEdit->paste();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->copy();
}

void MainWindow::on_pushButton_2_pressed()
{
    ui->textEdit->cut();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textEdit->undo();
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->textEdit->redo();
}

void MainWindow::on_pushButton_clicked()
{
 ui->textEdit->clear();
}

void MainWindow::on_action_triggered()
{
    ui->textEdit->clear();
}

void MainWindow::on_action_3_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_action_4_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_action_5_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_action_7_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_action_8_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_action_10_triggered()
{
    QMessageBox::StandardButton reply= QMessageBox:: question(this,"Выход","Вы точно хотите выйти?",QMessageBox::Yes | QMessageBox::No);
    if (reply== QMessageBox::Yes) QApplication::quit();

}
