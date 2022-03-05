//
// Created by Zhai Lintao on 2022/3/3.
//

#include <gmock/gmock.h>
#include "dollar.h"
#include "franc.h"

using Dollar = TDD::Dollar;
using Franc = TDD::Franc;
using Money = TDD::Money;

TEST(Currency, TestGtestEnv) {
    int result = 1 + 2;
    EXPECT_EQ(3, result);
}

TEST(Currency, TestMultiplication) {
    std::shared_ptr<Dollar> five = std::make_shared<Dollar>(5);
    auto product = five->Times(2);
    const Dollar &product_obj = *product.get();
    EXPECT_THAT(Dollar(10), product_obj);

    auto product2 = five->Times(3);
    EXPECT_THAT(Dollar(15), *product2.get());
}

TEST(Currency, TestEquals) {

    EXPECT_TRUE(Dollar(5) == Dollar(5));
    EXPECT_FALSE(Dollar(5) == (Dollar(6)));
}

TEST(Currency, TestFrancMuliplication) {
    std::shared_ptr<Franc> five = std::make_shared<Franc>(5);
    auto product = five->Times(2);
    const Franc &product_obj = *product.get();
    EXPECT_THAT(Franc(10), product_obj);
}

TEST(Currency, TestFrancEquals) {
    EXPECT_TRUE(Franc(5) == (Franc(5)));
    EXPECT_FALSE(Franc(5) == (Franc(6)));
}

