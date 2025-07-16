//
// Created by leona on 14/07/2025.
//
#include <gtest/gtest.h>
#include "../include/Tempo.h"

TEST(TempoTest, AdjustValuesCorrectly) {
    Tempo t;
    t.set_centesimo_di_secondo(120);
    t.aggiustavalori();
    EXPECT_EQ(t.getCentesimo_di_secondo(), 0);
    EXPECT_EQ(t.getDecimo_di_secondo(), 2); //12 decimi ==1 secondo e 2 decimi

    t.set_secondi(119);
    t.aggiustavalori();
    EXPECT_EQ(t.getSecondi(), 59);
    EXPECT_EQ(t.getMinuti(), 1);
}

TEST(TempoTest, FormatString) {
    Tempo t(1, 2, 3, 4, 5);
    std::string s = t.creastringa();
    EXPECT_NE(s.find("1h;"), std::string::npos);
    EXPECT_NE(s.find("2m;"), std::string::npos);
}
