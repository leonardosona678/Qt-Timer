//
// Created by leona on 13/07/2025.
//

#include "Tempo.h"

std::string Tempo::creastringa() {
    return std::to_string(ore) + ";" +
           std::to_string(minuti) + ";" +
           std::to_string(secondi) + ";" +
           std::to_string(DecimoDiSecondo) + " decsec, " +
           std::to_string(CentesimoDiSecondo) + " centsec";
}
//TODO mancano altri formati di visualizzazione

void Tempo::aggiustavalori() {
        if (CentesimoDiSecondo >= 10) {
            DecimoDiSecondo += CentesimoDiSecondo / 10;
            CentesimoDiSecondo = CentesimoDiSecondo%10;
        }

        if (DecimoDiSecondo >= 10) {
            secondi += DecimoDiSecondo / 10;
            DecimoDiSecondo = DecimoDiSecondo% 10;
        }

        if (secondi >= 60) {
            minuti += secondi / 60;
            secondi = secondi% 60;
        }

        if (minuti >= 60) {
            ore += minuti / 60;
            minuti = minuti%60;
        }
}


