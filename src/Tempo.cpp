//
// Created by leona on 13/07/2025.
//

#include "Tempo.h"

std::string Tempo::creastringa() {
    return std::to_string(ore) + "h;" +
           std::to_string(minuti) + "m;" +
           std::to_string(secondi) + "s;" +
           std::to_string(DecimoDiSecondo) + " decsec, " +
           std::to_string(CentesimoDiSecondo) + " centsec";
}
std::string Tempo::creastringaformatoesteso() {
    return std::to_string(ore) + " ore, " +
           std::to_string(minuti) + " minuti, " +
           std::to_string(secondi) + " secondi, " +
           std::to_string(DecimoDiSecondo) + " decimi, " +
           std::to_string(CentesimoDiSecondo) + " centesimi";
}



void Tempo::aggiustavalori() {
    if(ore<0||minuti<0||secondi<0||DecimoDiSecondo<0||CentesimoDiSecondo<0)
        throw std::invalid_argument("valori non validi");
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


