//
// Created by Zhai Lintao on 2022/3/5.
//

#include "public/money.h"

namespace TDD {
    Money::Money(int amount) : amount(amount) {

    }

    bool Money::Equals(const Money &rhs) const {
        bool result = (this->amount == rhs.amount);
        return result;
    }
}