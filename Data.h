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
    int Data::getGiorno() const { return giorno; }
    int Data::getMese() const { return mese; }
    int Data::getAnno() const { return anno; }

    // Setter
    void Data::setGiorno(int g) { this->giorno = g; }
    void Data::setMese(int m) { this->mese = m; }
    void Data::setAnno(int a) {this-> anno = a; }


    // Utility
    std::string CreaStringa() const;
    bool isValid() const;

private:
    bool bisestile(int anno) const;
    int giorniNelMese(int mese, int anno) const;
};

#endif // DATA_H





