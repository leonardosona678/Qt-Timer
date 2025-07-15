//
// Created by leona on 13/07/2025.
//
#include <stdexcept>
#ifndef DATA_H
#define DATA_H
#include <string>

class Data {
private:
    int giorno;
    int mese;
    int anno;

public:
    Data();
    Data(int g, int m, int a);

    // Getter
    int getGiorno() const { return giorno; }
    int getMese() const { return mese; }
    int getAnno() const { return anno; }

    // Setter
    void setGiorno(int g, int m, int a) {
        //if(g>0&&g<=giorniNelMese(m,a)). Faccio i controlli nei metodi
          this->giorno = g;
        //else
        //  throw std::invalid_argument("giorno non valido ");

    }
    void setMese(int m) {
        //if(m>0&&m<=12)
          this->mese = m;
        //else
        //  throw std::invalid_argument("mese non valido ");
    }
    void setAnno(int a) {
        this-> anno = a;
    }


    // Utility
    std::string CreaStringa() const;
    std::string CreaStringaFormatoAmericano() const;
    bool isValid() const;

private:
    bool bisestile(int anno) const;
    int giorniNelMese(int mese, int anno) const;
};

#endif // DATA_H





