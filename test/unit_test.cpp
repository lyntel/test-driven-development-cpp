//
// Created by Zhai Lintao on 2022/3/3.
//

#include <gmock/gmock.h>
#include "dollar.h"

using TDD::Dollar;

TEST(Current, TestGtestEnv) {
    int result = 1 + 2;
    EXPECT_EQ(3, result);
}

TEST(Current, TestMultiplication) {
    std::shared_ptr<Dollar> five = std::make_shared<Dollar>(5);
    auto product = five->Times(2);
    EXPECT_EQ(10, product->amount);

    auto product2 = five->Times(3);
    EXPECT_EQ(15, product2->amount);
}

TEST(Current, TestEquality) {
    EXPECT_TRUE(std::make_shared<Dollar>(5)->Equals(std::make_shared<Dollar>(5)));
}