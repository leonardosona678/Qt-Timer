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
}

void Timer::tick() {
    if (!running) return;

    int cent = tempo.getCentesimo_di_secondo() + 1;
    tempo.set_centesimo_di_secondo(cent);
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
