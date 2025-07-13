/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *MostraData;
    QPushButton *NascondiData;
    QLabel *labelData;
    QLabel *labelTempo;
    QPushButton *bottoneStart;
    QPushButton *bottoneReset;
    QPushButton *bottoneStop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        MostraData = new QPushButton(centralwidget);
        MostraData->setObjectName("MostraData");

        verticalLayout->addWidget(MostraData);

        NascondiData = new QPushButton(centralwidget);
        NascondiData->setObjectName("NascondiData");

        verticalLayout->addWidget(NascondiData);

        labelData = new QLabel(centralwidget);
        labelData->setObjectName("labelData");

        verticalLayout->addWidget(labelData);

        labelTempo = new QLabel(centralwidget);
        labelTempo->setObjectName("labelTempo");

        verticalLayout->addWidget(labelTempo);

        bottoneStart = new QPushButton(centralwidget);
        bottoneStart->setObjectName("bottoneStart");

        verticalLayout->addWidget(bottoneStart);

        bottoneReset = new QPushButton(centralwidget);
        bottoneReset->setObjectName("bottoneReset");

        verticalLayout->addWidget(bottoneReset);

        bottoneStop = new QPushButton(centralwidget);
        bottoneStop->setObjectName("bottoneStop");

        verticalLayout->addWidget(bottoneStop);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MostraData->setText(QCoreApplication::translate("MainWindow", "Mostra Data", nullptr));
        NascondiData->setText(QCoreApplication::translate("MainWindow", "Nascondi Data", nullptr));
        labelData->setText(QCoreApplication::translate("MainWindow", "--/--/----", nullptr));
        labelTempo->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        bottoneStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        bottoneReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        bottoneStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
