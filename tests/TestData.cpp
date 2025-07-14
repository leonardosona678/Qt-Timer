//
// Created by leona on 14/07/2025.
//
#include <gtest/gtest.h>
#include "../include/Data.h"

TEST(DataTest, ValidDateCreatesString) {
    Data d(15, 7, 2025);
    EXPECT_EQ(d.CreaStringa(), "15/7/2025");
}

TEST(DataTest, InvalidDateThrows) {
    EXPECT_THROW(Data(31, 2, 2021), std::invalid_argument);
}
