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
    for(int i = 0; i <= rectanglePointsCount;)
    {
        if(rectangle[i][0] == x_coordinate && rectangle[i][1] == y_coordinate)
        {
            for(int j = i; j <= rectanglePointsCount; j++)
            {
                rectangle[j][0] = rectangle[j + 1][0];
                rectangle[j][1] = rectangle[j + 1][1];
            }
            rectanglePointsCount --;
        }
        else
            i++;
    }
}

void MainWindow::deletePoint(QString text)
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
    for(int i = 0; i <= pointsCount;)
    {
        if(points[i][0] == x_coordinate && points[i][1] == y_coordinate)
        {
            for(int j = i; j <= pointsCount; j++)
            {
                points[j][0] = points[j + 1][0];
                points[j][1] = points[j + 1][1];
            }
            pointsCount --;
        }
        else
            i++;
    }
}

QString MainWindow::makeTextForOutput()
{
    QString text = "";
    if(ui->rbRectangle->isChecked()){
        for(int i = 0; i < rectanglePointsCount; i++)
        {
            text = text
                    + QString::fromStdString(to_string(rectangle[i][0]))
                    + " "
                    + QString::fromStdString(to_string(rectangle[i][1]))
                    + "\n";
        }
    }
    else if(ui->rbPoint->isChecked()){
        for(int i = 0; i < pointsCount; i++)
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

int MainWindow::isRectangle()
{
    int ang1 = ((rectangle[1][0] - rectangle[0][0]) * (rectangle[2][0] - rectangle[1][0])) +
           ((rectangle[1][1] - rectangle[0][1]) * (rectangle[2][1] - rectangle[1][1]));
    int ang2 = ((rectangle[2][0] - rectangle[1][0]) * (rectangle[3][0] - rectangle[2][0])) +
           ((rectangle[2][1] - rectangle[1][1]) * (rectangle[3][1] - rectangle[2][1]));
    int ang3 = ((rectangle[3][0] - rectangle[0][0]) * (rectangle[3][0] - rectangle[2][0])) +
           ((rectangle[3][1] - rectangle[0][1]) * (rectangle[3][1] - rectangle[2][1]));
    if(ang1 == ang2 && ang1 == ang3 && ang3 == ang2 && ang1 == 0)
        return SUCCESS;
    return NOT_RECTANGLE;
}

void MainWindow::calculateRectangleMiddle()
{
    rectangleMiddle[0] = (float(rectangle[0][0]) + float(rectangle[2][0])) / 2;
    rectangleMiddle[1] = (float(rectangle[0][1]) + float(rectangle[2][1])) / 2;
}

int IsPointsOnLine(int x1, int y1, int x2, int y2, int x3, int y3) {
    if((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3) == 0)
        return SUCCESS;
    else
        return NOT_TRIANGLE;
}

float findLineLength(int x1, int y1, int x2, int y2)
{
    return sqrt(float((x2 - x1) * (x2 - x1) + (x2 - x1) * (y2 - y1)));
}

void MainWindow::findTriangle()
{
    float a, b, c, size;
    float point_x, point_y;
    lineSize = -1;
    for(int i = 0; i < pointsCount - 2; i++)
    {
        for(int j = i + 1; j < pointsCount - 1; j++)
        {
            for(int k = j + 1; k < pointsCount; k++)
            {
                if(IsPointsOnLine(rectangle[i][0], rectangle[i][1], rectangle[j][0], rectangle[j][1], rectangle[k][0], rectangle[k][1]) == SUCCESS)
                {
                    a = findLineLength(rectangle[i][0], rectangle[i][1], rectangle[j][0], rectangle[j][1]);
                    b = findLineLength(rectangle[i][0], rectangle[i][1], rectangle[k][0], rectangle[k][1]);
                    c = findLineLength(rectangle[k][0], rectangle[k][1], rectangle[j][0], rectangle[j][1]);
                    point_x = float((a * rectangle[i][0] + b * rectangle[j][0] + c * rectangle[k][0])) /
                                                float(a + b + c);
                    point_y = float((a * rectangle[i][1] + b * rectangle[j][1] + c * rectangle[k][1])) /
                                                float(a + b + c);
                    size = findLineLength(rectangleMiddle[0], rectangleMiddle[1], point_x, point_y);
                    if(lineSize == -1)
                    {
                        lineSize = size;
                        triangle[0][0] = rectangle[i][0]; triangle[0][1] = rectangle[i][1];
                        triangle[1][0] = rectangle[j][0]; triangle[1][1] = rectangle[j][1];
                        triangle[2][0] = rectangle[k][0]; triangle[2][1] = rectangle[k][1];
                    }
                    else if(lineSize > size)
                    {
                        lineSize = size;
                        triangle[0][0] = rectangle[i][0]; triangle[0][1] = rectangle[i][1];
                        triangle[1][0] = rectangle[j][0]; triangle[1][1] = rectangle[j][1];
                        triangle[2][0] = rectangle[k][0]; triangle[2][1] = rectangle[k][1];
                    }
                }
            }
        }
    }
}

void MainWindow::on_addPointButton_clicked()
{
    QString point_coordinates = ui->addPointLineEdit->text();
    ui->rectangleOutputLable->setAlignment(Qt::AlignTop);
    ui->pointsOutputLable->setAlignment(Qt::AlignTop);
    ui->dialogLable->setText(QString(""));
    int error = isPoint(point_coordinates);
    if(error == SUCCESS){
        if(ui->rbRectangle->isChecked()){
            if(rectanglePointsCount < 4){
                setRectanglePoint(point_coordinates);
                rectanglePointsCount ++;
                ui->rectangleOutputLable->setText(makeTextForOutput());
                if(rectanglePointsCount == 4 && isRectangle() != SUCCESS)
                    ui->dialogLable->setText(QString("Введенный 4-х угольник не прямоугольник"));
            }
            else
            {
                if(isRectangle() == SUCCESS)
                    ui->dialogLable->setText(QString("Премоугольник введен"));
                else
                    ui->dialogLable->setText(QString("Введенный 4-х угольник не прямоугольник"));

            }
        }
        else if(ui->rbPoint->isChecked()){
            setPoint(point_coordinates);
            pointsCount ++;
            ui->pointsOutputLable->setText(makeTextForOutput());
        }
    }
    else
        handleError(error);
}

void MainWindow::on_deletePointButton_clicked()
{
    QString point_coordinates = ui->deletePointLineEdit->text();
    int error = isPoint(point_coordinates);
    ui->rectangleOutputLable->setAlignment(Qt::AlignTop);
    ui->pointsOutputLable->setAlignment(Qt::AlignTop);
    ui->dialogLable->setText(QString(""));
    if(error == SUCCESS){
        if(ui->rbRectangle->isChecked())
        {
            if(rectanglePointsCount > 0)
            {
                deleteRectanglePoint(point_coordinates);
                if(rectanglePointsCount > 0)
                    ui->rectangleOutputLable->setText(makeTextForOutput());
                else
                    ui->rectangleOutputLable->setText("");
            }
            else
                ui->dialogLable->setText(QString("Вершины прямоугольника не введены"));
        }
        else if(ui->rbPoint->isChecked())
        {
            if(pointsCount > 0)
            {
                deletePoint(point_coordinates);
                if (pointsCount > 0)
                    ui->pointsOutputLable->setText(makeTextForOutput());
                else
                    ui->pointsOutputLable->setText("");
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
    ui->answerOutputLable->setText("");
    if(pointsCount >= 3 && isRectangle() == SUCCESS)
    {
        calculateRectangleMiddle();
        findTriangle();
        QString text = "Каординаы вершин треугольника \nCередина прямлугольника: " +
                QString::fromStdString(to_string(rectangleMiddle[0])) +
                " " +
                QString::fromStdString(to_string(rectangleMiddle[1])) +
                "\n" +
                "Растояние: " +
                QString::fromStdString(to_string(lineSize));
        ui->answerOutputLable->setText(text);
    }
    else
        ui->dialogLable->setText(QString("Что-то не так, проверьте введенные данные"));
}
