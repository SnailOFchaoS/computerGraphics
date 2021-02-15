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
    if(int(tmp_string.length()) == 0)
    {
        return EMPTY_INPUT;
    }
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
    if (space_count > 1)
        return INCORRECT_NUMBERS_COUNT;
    return SUCCESS;
}

void MainWindow::setRectanglePoint(QString text)
{
    string tmp_string =text.toStdString();
    int f = 0;
    int j = 0;
    for(int i = 0; i < int(tmp_string.length()); i++){
        if(tmp_string[i] != 32 && f == 0){
            rectangle[rectanglePointsCount][0] = rectangle[rectanglePointsCount][0] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
        if(tmp_string[i] == 32){
            f = 1;
            j = 0;
        }
        if(tmp_string[i] != 32 && f == 1){
            rectangle[rectanglePointsCount][1] = rectangle[rectanglePointsCount][1] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
    }
}

void MainWindow::setPoint(QString text)
{
    string tmp_string =text.toStdString();
    int f = 0;
    int j = 0;
    for(int i = 0; i < int(tmp_string.length()); i++){
        if(tmp_string[i] != 32 && f == 0){
            points[pointsCount][0] = points[pointsCount][0] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
        if(tmp_string[i] == 32){
            f = 1;
            j = 0;
        }
        if(tmp_string[i] != 32 && f == 1){
            points[pointsCount][1] = points[pointsCount][1] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
    }
}

void MainWindow::deleteRectanglePoint(QString text)
{
    string tmp_string =text.toStdString();
    int f = 0;
    int j = 0;
    int x_coordinate = 0, y_coordinate = 0;
    for(int i = 0; i < int(tmp_string.length()); i++){
        if(tmp_string[i] != 32 && f == 0){
            x_coordinate = x_coordinate * 10 + int(tmp_string[i]) - 48;
            j++;
        }
        if(tmp_string[i] == 32){
            f = 1;
            j = 0;
        }
        if(tmp_string[i] != 32 && f == 1){
            y_coordinate = y_coordinate * 10 + int(tmp_string[i]) - 48;
            j++;
        }
    }
    f = 0;
    for(int i = 0; i <= rectanglePointsCount; i ++)
    {
        if(rectangle[i][0] == x_coordinate && rectangle[i][1] == y_coordinate)
        {
//            delete(rectangle[i][0]);
//            delete(rectangle[i][1]);
            rectanglePointsCount --;
            i--;
        }
    }
}

void MainWindow::deletePoint(QString text)
{
    string tmp_string =text.toStdString();
    int f = 0;
    int j = 0;
    for(int i = 0; i < int(tmp_string.length()); i++){
        if(tmp_string[i] != 32 && f == 0){
            points[pointsCount][0] = points[pointsCount][0] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
        if(tmp_string[i] == 32){
            f = 1;
            j = 0;
        }
        if(tmp_string[i] != 32 && f == 1){
            points[pointsCount][1] = points[pointsCount][1] * 10 + int(tmp_string[i]) - 48;
            j++;
        }
    }
}

QString MainWindow::makeTextForOutput()
{
    QString text = "";
    if(ui->rbRectangle->isChecked()){
        for(int i = 0; i <= rectanglePointsCount; i++)
        {
            text = text
                    + QString::fromStdString(to_string(rectangle[i][0]))
                    + " "
                    + QString::fromStdString(to_string(rectangle[i][1]))
                    + "\n";
        }
    }
    else if(ui->rbPoint->isChecked()){
        for(int i = 0; i <= pointsCount; i++)
        {
            text = text
                    + QString::fromStdString(to_string(points[i][0]))
                    + " "
                    + QString::fromStdString(to_string(points[i][1]))
                    + "\n";
        }
    }
    return text;
}

void MainWindow::handleError(int error)
{
    if(error == 1)
    {
        ui->dialogLable->setText(QString("Введены недопустимые символы"));
    }
    if(error == 2)
    {
        ui->dialogLable->setText(QString("Введите 2 координаты x и у, не больше"));
    }
    if(error == 3)
    {
        ui->dialogLable->setText(QString("Введите каординаты точки"));
    }
}

void MainWindow::on_addPointButton_clicked()
{
    QString point_coordinates = ui->addPointLineEdit->text();
    int error = isPoint(point_coordinates);
    if(error == SUCCESS){
        if(ui->rbRectangle->isChecked()){
            if(rectanglePointsCount < 4){
                setRectanglePoint(point_coordinates);
                ui->rectangleOutputLable->setText(makeTextForOutput());
                rectanglePointsCount ++;
            }
            else
                ui->dialogLable->setText(QString("Премоугольник введен"));
        }
        else if(ui->rbPoint->isChecked()){
            setPoint(point_coordinates);
            ui->pointsOutputLable->setText(makeTextForOutput());
            pointsCount ++;
        }
    }
    else
        handleError(error);
}

void MainWindow::on_deletePointButton_clicked()
{
    QString point_coordinates = ui->addPointLineEdit->text();
    int error = isPoint(point_coordinates);
    if(error == SUCCESS){
        if(ui->rbRectangle->isChecked()){
            if(rectanglePointsCount > 0){
                deleteRectanglePoint(point_coordinates);
                ui->rectangleOutputLable->setText(makeTextForOutput());
                rectanglePointsCount --;
            }
            else
                ui->dialogLable->setText(QString("Вершины прямоугольника не введены"));
        }
        else if(ui->rbPoint->isChecked()){
            if(pointsCount > 0){
                deletePoint(point_coordinates);
                ui->pointsOutputLable->setText(makeTextForOutput());
                pointsCount --;
            }
            else
                ui->dialogLable->setText(QString("Точки не введены"));
        }
    }
    else
        handleError(error);
}

void MainWindow::on_drawButton_clicked()
{

}
