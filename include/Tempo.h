//
// Created by leona on 13/07/2025.
//

#ifndef TEMPO_H
#define TEMPO_H
#include <stdexcept>
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
        if(ore>=0)
          this->ore = ore;
        else
            throw std::invalid_argument("Ore valore invalido");
    }

    void set_minuti( int minuti) {
        if(minuti>=0)
         this->minuti = minuti;
        else
            throw std::invalid_argument("valore Minuti invalido");
    }

    void set_secondi( int secondi) {
        if(secondi>=0)
          this->secondi = secondi;
        else
            throw std::invalid_argument("valore Secondi invalido");
    }

    void set_decimo_di_secondo(int decimo_di_secondo) {
        if(decimo_di_secondo>=0)
          this->DecimoDiSecondo = decimo_di_secondo;
        else
            throw std::invalid_argument("valore DecimoDiSecondo invalido");
    }

    void set_centesimo_di_secondo( int centesimo_di_secondo) {
        if(centesimo_di_secondo>=0)
          this->CentesimoDiSecondo = centesimo_di_secondo;
        else
            throw std::invalid_argument("valore CentesimoDiSecond invalido");
    }
    std::string creastringa();
    std::string creastringaformatoesteso();
    void aggiustavalori();
};



#endif //TEMPO_H
