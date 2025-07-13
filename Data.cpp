//
// Created by leona on 13/07/2025.
//

#include "Data.h"
#include <sstream>
#include <iomanip>
#include <stdexcept>

// Costruttore di default
Data::Data() : giorno(1), mese(1), anno(1970) {}
Data::Data(int g, int m, int a) : giorno(g), mese(m), anno(a) {
    if (!isValid()) {
        throw std::invalid_argument("Data non valida: " + std::to_string(g) + "/" + std::to_string(m) + "/" + std::to_string(a));
    }
}


// Formattazione "gg/mm/aaaa"
std::string Data::CreaStringa() const {
    return std::to_string(giorno) + "/" + std::to_string(mese) + "/" + std::to_string(anno);
}
//TODO mancano i vari formati di visualizzazione

// Controllo validità data
bool Data::isValid() const {
    if (anno < 0 || mese < 1 || mese > 12 || giorno < 1)
        return false;
    if(giorno>giorniNelMese(mese, anno))
        return false;
    return true;

}

//  calcolo giorni nel mese
int Data::giorniNelMese(int mese, int anno) const {
    switch (mese) {
        case 1:case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return bisestile(anno) ? 29 : 28;
        default: return 0;
    }
}

// Controllo anno bisestile
bool Data::bisestile(int anno) const {
    return (anno % 4 == 0 && (anno % 100 != 0 || anno % 400 == 0));
}
