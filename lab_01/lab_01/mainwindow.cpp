#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->rbRectangle->setChecked(true);
    if (ui->rbRectangle->isChecked() or ui->rbPoint->isChecked()){
        ui->dialogLable->setText("");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

int isPoint(QString text)
{
    string tmp_string =text.toStdString();
    string valid_characters = "1234567890 ";
    int space_count = 0;
    string space_str = " ";
    for(int i = 0; i < int(tmp_string.length()); i++)
    {
        if(int(valid_characters.find(tmp_string[i])) == -1)
        {
            return INCORRECT_SYMBOLS;
        }
        if(tmp_string[i] == 32)
        {
            space_count++;
        }
    }
    if (space_count > 2)
        return INCORRECT_NUMBERS_COUNT;
    return SUCCESS;
}

void MainWindow::on_addPointButton_clicked()
{
    QString point_coordinates = ui->addPointLineEdit->text();
    int error = isPoint(point_coordinates);
    if(error == SUCCESS){
        ui->dialogLable->setText(QString("Точка"));
//        if(ui->rbRectangle->isChecked()){
//            d
//        }
//        else if(ui->rbPoint->isChecked()){
//            f
//        }
    }
    else if(error == 1)
    {
        ui->dialogLable->setText(QString("Введены недопустимые символы"));
    }
    else if(error == 2)
    {
        ui->dialogLable->setText(QString("Введено кекорректное кол-во символов"));
    }
}
