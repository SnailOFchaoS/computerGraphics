/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *addPointLineEdit;
    QPushButton *addPointButton;
    QWidget *drawPlace;
    QRadioButton *rbRectangle;
    QRadioButton *rbPoint;
    QLabel *dialogLable;
    QLabel *rectangleOutputLable;
    QLabel *pointsOutputLable;
    QLabel *label;
    QLabel *label_2;
    QPushButton *deletePointButton;
    QLineEdit *deletePointLineEdit;
    QPushButton *drawButton;
    QLabel *label_3;
    QLabel *answerOutputLable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addPointLineEdit = new QLineEdit(centralwidget);
        addPointLineEdit->setObjectName(QString::fromUtf8("addPointLineEdit"));
        addPointLineEdit->setGeometry(QRect(150, 40, 110, 20));
        addPointButton = new QPushButton(centralwidget);
        addPointButton->setObjectName(QString::fromUtf8("addPointButton"));
        addPointButton->setGeometry(QRect(20, 40, 110, 23));
        drawPlace = new QWidget(centralwidget);
        drawPlace->setObjectName(QString::fromUtf8("drawPlace"));
        drawPlace->setGeometry(QRect(280, 20, 500, 500));
        drawPlace->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        rbRectangle = new QRadioButton(centralwidget);
        rbRectangle->setObjectName(QString::fromUtf8("rbRectangle"));
        rbRectangle->setGeometry(QRect(20, 20, 104, 17));
        rbPoint = new QRadioButton(centralwidget);
        rbPoint->setObjectName(QString::fromUtf8("rbPoint"));
        rbPoint->setGeometry(QRect(150, 20, 104, 17));
        dialogLable = new QLabel(centralwidget);
        dialogLable->setObjectName(QString::fromUtf8("dialogLable"));
        dialogLable->setGeometry(QRect(0, 0, 281, 21));
        rectangleOutputLable = new QLabel(centralwidget);
        rectangleOutputLable->setObjectName(QString::fromUtf8("rectangleOutputLable"));
        rectangleOutputLable->setGeometry(QRect(20, 150, 110, 100));
        rectangleOutputLable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pointsOutputLable = new QLabel(centralwidget);
        pointsOutputLable->setObjectName(QString::fromUtf8("pointsOutputLable"));
        pointsOutputLable->setGeometry(QRect(150, 150, 110, 200));
        pointsOutputLable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 130, 151, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 130, 121, 16));
        deletePointButton = new QPushButton(centralwidget);
        deletePointButton->setObjectName(QString::fromUtf8("deletePointButton"));
        deletePointButton->setGeometry(QRect(20, 70, 110, 23));
        deletePointLineEdit = new QLineEdit(centralwidget);
        deletePointLineEdit->setObjectName(QString::fromUtf8("deletePointLineEdit"));
        deletePointLineEdit->setGeometry(QRect(150, 70, 110, 20));
        drawButton = new QPushButton(centralwidget);
        drawButton->setObjectName(QString::fromUtf8("drawButton"));
        drawButton->setGeometry(QRect(20, 100, 110, 23));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 370, 47, 13));
        answerOutputLable = new QLabel(centralwidget);
        answerOutputLable->setObjectName(QString::fromUtf8("answerOutputLable"));
        answerOutputLable->setGeometry(QRect(20, 390, 240, 130));
        answerOutputLable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addPointButton->setText(QCoreApplication::translate("MainWindow", "add point ", nullptr));
        rbRectangle->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        rbPoint->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\260", nullptr));
        dialogLable->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265, \320\264\320\273\321\217 \320\272\320\260\320\272\320\276\320\271 \321\204\320\270\320\263\321\203\321\200\321\213 \321\201\321\207\320\270\321\202\321\213\320\262\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 ", nullptr));
        rectangleOutputLable->setText(QString());
        pointsOutputLable->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213 \320\277\321\200\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\270", nullptr));
        deletePointButton->setText(QCoreApplication::translate("MainWindow", "delete point", nullptr));
        drawButton->setText(QCoreApplication::translate("MainWindow", "visualize", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        answerOutputLable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
