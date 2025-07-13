//
// Created by leona on 13/07/2025.
//

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
    void setGiorno(int g) { this->giorno = g; }
    void setMese(int m) { this->mese = m; }
    void setAnno(int a) {this-> anno = a; }


    // Utility
    std::string CreaStringa() const;
    std::string CreaStringaFormatoAmericano() const;
    bool isValid() const;

private:
    bool bisestile(int anno) const;
    int giorniNelMese(int mese, int anno) const;
};

#endif // DATA_H





