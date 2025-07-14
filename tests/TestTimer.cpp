//
// Created by leona on 14/07/2025.
//
#include <gtest/gtest.h>
#include "../include/Timer.h"

TEST(TimerTest, TickRespectsRunningFlag) {
    Timer tm;
    tm.reset();
    tm.tick();
    EXPECT_EQ(tm.getTempo().getCentesimo_di_secondo(), 0); //reset rende running=false

    tm.inizio();
    tm.tick();
    EXPECT_EQ(tm.getTempo().getCentesimo_di_secondo(), 1);
}

TEST(TimerTest, ResetClearsTime) {
    Timer tm;
    tm.inizio();
    for(int i = 0; i < 50; ++i) tm.tick();
    tm.reset();
    EXPECT_EQ(tm.getTempo().getCentesimo_di_secondo(), 0);
}
