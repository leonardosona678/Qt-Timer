//
// Created by leona on 13/07/2025.
//

#ifndef TIMER_H
#define TIMER_H

#include "Tempo.h"

class Timer {
private:
    Tempo tempo;
    bool running;

public:
    Timer();  // Costruttore default

    void inizio();     // Avvia il timer
    void fine();       // Ferma il timer
    void reset();      // Reimposta tempo a 0
    void tick();       // Aumenta di 1 centesimo di secondo

    bool isRunning() const;
    Tempo getTempo() const;
    std::string getTempoinstringaformato1();  // Formattazione testuale
    std::string getTempoinstringaformato2();
};

#endif // TIMER_H

