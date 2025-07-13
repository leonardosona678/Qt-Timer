//
// Created by leona on 13/07/2025.
//
// include/MainWindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Data.h"
#include <QMainWindow>
#include <QTimer>
#include "../include/Timer.h"

QT_FORWARD_DECLARE_CLASS(QLabel)
QT_FORWARD_DECLARE_CLASS(QPushButton)

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    private slots:
    void avviaTimer();
    void fermaTimer();
    void resetTimer();
    void aggiornaDisplay();
    void mostraDataCorrente();
    void nascondiData();

private:
    Ui::MainWindow *ui;  // Interfaccia generata da Qt Designer

    Timer timerLogico;
    QTimer *qtimer;
};

#endif // MAINWINDOW_H
