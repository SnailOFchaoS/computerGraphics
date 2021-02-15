#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>
#include <QtGui>
#include <QtCore>
#include <QRadioButton>
#include <string>

#define SUCCESS 0
#define INCORRECT_SYMBOLS 1
#define INCORRECT_NUMBERS_COUNT 2

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double rectangle[4][2];
    double points[10000][2];

private slots:
    void on_addPointButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
