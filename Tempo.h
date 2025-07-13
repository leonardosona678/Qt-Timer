//
// Created by leona on 13/07/2025.
//

#ifndef TEMPO_H
#define TEMPO_H
#include <string>


class Tempo {
private:
    int ore;
    int minuti;
    int secondi;
    int DecimoDiSecondo;
    int CentesimoDiSecondo;
public:
    Tempo(): ore(0), minuti(0), secondi(0), DecimoDiSecondo(0), CentesimoDiSecondo(0) {}
    Tempo(int o, int m, int sec, int d, int c):ore(o), minuti(m), secondi(sec), DecimoDiSecondo(d), CentesimoDiSecondo(c) {
        aggiustavalori();
    }

     int getOre() const {
        return ore;
    }

     int getMinuti() const {
        return minuti;
    }

     int getSecondi() const {
        return secondi;
    }

     int getDecimo_di_secondo() const {
        return DecimoDiSecondo;
    }

    int getCentesimo_di_secondo() const {
        return CentesimoDiSecondo;
    }

    void set_ore(int ore) {
        this->ore = ore;
    }

    void set_minuti( int minuti) {
        this->minuti = minuti;
    }

    void set_secondi( int secondi) {
        this->secondi = secondi;
    }

    void set_decimo_di_secondo(int decimo_di_secondo) {
        this->DecimoDiSecondo = decimo_di_secondo;
    }

    void set_centesimo_di_secondo( int centesimo_di_secondo) {
        this->CentesimoDiSecondo = centesimo_di_secondo;
    }
    std::string creastringa();
    void aggiustavalori();
};



#endif //TEMPO_H
