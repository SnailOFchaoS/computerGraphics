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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *drawPlace;
    QLabel *dialogLable;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbRectangle;
    QPushButton *addPointButton;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbPoint;
    QLineEdit *addPointLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        drawPlace = new QWidget(centralwidget);
        drawPlace->setObjectName(QString::fromUtf8("drawPlace"));
        drawPlace->setGeometry(QRect(280, 20, 500, 500));
        dialogLable = new QLabel(centralwidget);
        dialogLable->setObjectName(QString::fromUtf8("dialogLable"));
        dialogLable->setGeometry(QRect(10, 0, 281, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 220, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbRectangle = new QRadioButton(widget);
        rbRectangle->setObjectName(QString::fromUtf8("rbRectangle"));

        verticalLayout->addWidget(rbRectangle);

        addPointButton = new QPushButton(widget);
        addPointButton->setObjectName(QString::fromUtf8("addPointButton"));

        verticalLayout->addWidget(addPointButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rbPoint = new QRadioButton(widget);
        rbPoint->setObjectName(QString::fromUtf8("rbPoint"));

        verticalLayout_2->addWidget(rbPoint);

        addPointLineEdit = new QLineEdit(widget);
        addPointLineEdit->setObjectName(QString::fromUtf8("addPointLineEdit"));

        verticalLayout_2->addWidget(addPointLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

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
        dialogLable->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265, \320\264\320\273\321\217 \320\272\320\260\320\272\320\276\320\271 \321\204\320\270\320\263\321\203\321\200\321\213 \321\201\321\207\320\270\321\202\321\213\320\262\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 ", nullptr));
        rbRectangle->setText(QCoreApplication::translate("MainWindow", "rectangle", nullptr));
        addPointButton->setText(QCoreApplication::translate("MainWindow", "add point ", nullptr));
        rbPoint->setText(QCoreApplication::translate("MainWindow", "points", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
