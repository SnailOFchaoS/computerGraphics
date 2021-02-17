#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <QtGui>
#include <QtCore>
#include <QRadioButton>
#include <QLabel>
#include <string>

#define SUCCESS 0
#define INCORRECT_SYMBOLS 1
#define INCORRECT_NUMBERS_COUNT 2
#define EMPTY_INPUT 3
#define NOT_RECTANGLE 10
#define NOT_TRIANGLE 11

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int rectangle[4][2];
    int points[10000][2];
    int pointsCount = 0, rectanglePointsCount = 0;
    float rectangleMiddle[2];
    int triangle[3][2];
    float lineSize;

private slots:
    void setRectanglePoint(QString text);
    void setPoint(QString text);
    void handleError(int error);
    QString makeTextForOutput();
    void deleteRectanglePoint(QString text);
    void deletePoint(QString text);
    int isRectangle();
    void calculateRectangleMiddle();
    void findTriangle();

    void on_addPointButton_clicked();

    void on_deletePointButton_clicked();

    void on_drawButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
