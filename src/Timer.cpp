#include "Timer.h"

Timer::Timer() : tempo(), running(false) {}

void Timer::inizio() {
    running = true;
}

void Timer::fine() {
    running = false;
}

void Timer::reset() {
    tempo = Tempo();  // Ricrea un tempo vuoto
    running = false; //il reset stoppa il tempo(oltre a riazzerare), non permette di far ripartire il timer
}

void Timer::tick() {
    if (!running) return;

    int centesimo = tempo.getCentesimo_di_secondo() + 1;
    tempo.set_centesimo_di_secondo(centesimo);
    tempo.aggiustavalori();
}

bool Timer::isRunning() const {
    return running;
}

Tempo Timer::getTempo() const {
    return tempo;
}

std::string Timer::getTempoinstringaformato1() {
    return tempo.creastringa();
}

std::string Timer::getTempoinstringaformato2() {
    return tempo.creastringaformatoesteso();
}
