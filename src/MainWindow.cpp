//
// Created by leona on 13/07/2025.
//
#include "../include/MainWindow.h"
#include "ui_MainWindow.h"
#include <QPushButton>
#include <QLabel>
#include <QDate>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      qtimer(new QTimer(this))
{
    ui->setupUi(this);
    // Connessioni pulsanti
    //simula commit
    //simula commit
    connect(ui->bottoneStart, &QPushButton::clicked, this, &MainWindow::avviaTimer);
    connect(ui->bottoneStop, &QPushButton::clicked, this, &MainWindow::fermaTimer);
    connect(ui->bottoneReset, &QPushButton::clicked, this, &MainWindow::resetTimer);
    connect(ui->MostraData, &QPushButton::clicked, this, &MainWindow::mostraDataCorrente);
    connect(ui->NascondiData, &QPushButton::clicked, this, &MainWindow::nascondiData);

    // Timer Qt per aggiornare la GUI
    //simula commit
    connect(qtimer, &QTimer::timeout, this, &MainWindow::aggiornaDisplay);
    qtimer->start(10); // ogni 10 ms → 1 centesimo
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::avviaTimer() {
    timerLogico.inizio();
    qtimer->start(10);
}

void MainWindow::fermaTimer() {
    timerLogico.fine();
    qtimer->stop();
}

void MainWindow::resetTimer() {
    //se volessi che il reset anche senza pigiare stop faccia ripartire il tempo da zero(senza però bloccarsi),
    //dovrei levare da questo metodo "qtimer->stop()" e levare l'impostazione "running=false"
    //nel metodo reset di Timer
    qtimer->stop();
    timerLogico.reset();
    aggiornaDisplay();
}
//simulo commit
void MainWindow::aggiornaDisplay() {
    timerLogico.tick();
    ui->labelTempo->setText(QString::fromStdString(timerLogico.getTempoinstringaformato2()));
}
void MainWindow::mostraDataCorrente() {
    QDate oggi = QDate::currentDate(); //funzione statica di Qt che restituisce la data di oggi
//non ho bisogno di ricontrollare la validità della data, l'ho già fatto nel costruttore
    try {
        Data data(oggi.day(), oggi.month(), oggi.year());
        ui->labelData->setText(QString::fromStdString(data.CreaStringa()));
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Errore", e.what());
    }
}
void MainWindow::nascondiData() {
    ui->labelData->clear(); // Svuota il contenuto del QLabel
}


