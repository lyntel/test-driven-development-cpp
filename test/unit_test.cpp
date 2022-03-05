//
// Created by Zhai Lintao on 2022/3/3.
//

#include <gmock/gmock.h>
#include "dollar.h"

using Dollar = TDD::Dollar;

TEST(Current, TestGtestEnv) {
    int result = 1 + 2;
    EXPECT_EQ(3, result);
}

TEST(Current, TestMultiplication) {
    std::shared_ptr<Dollar> five = std::make_shared<Dollar>(5);
    auto product = five->Times(2);
    const Dollar& product_obj =  *product.get();
    EXPECT_THAT(Dollar(10), product_obj);

    auto product2 = five->Times(3);
    EXPECT_THAT(Dollar(15), *product2.get());
}

TEST(Current, TestEquality) {
    EXPECT_TRUE(std::make_shared<Dollar>(5)->Equals(std::make_shared<Dollar>(5)));
    EXPECT_FALSE(std::make_shared<Dollar>(5)->Equals(std::make_shared<Dollar>(6)));
}