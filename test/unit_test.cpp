//
// Created by Zhai Lintao on 2022/3/3.
//

#include <gmock/gmock.h>
#include "dollar.h"

TEST(Current,TestGtestEnv){
    int result = 1 +2;
    EXPECT_EQ(3,result);
}

TEST(Current,TestMultiplication){
    Dollar* five = new Dollar(5);
    five->times(2);
    EXPECT_EQ(10,five->amount);
}