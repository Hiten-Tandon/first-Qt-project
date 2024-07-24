#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_plusone_clicked()
{

  ui->label->setText(
      std::to_string(stoi(ui->label->text().toStdString()) + 1).c_str());
}



void MainWindow::on_minusone_clicked()
{

  ui->label->setText(
      std::to_string(stoi(ui->label->text().toStdString()) - 1).c_str());
}
