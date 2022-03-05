//
// Created by Zhai Lintao on 2022/3/5.
//

#include "public/franc.h"

namespace TDD {

    Franc::Franc(int amount) : amount(amount) {

    }

    std::shared_ptr<Franc> Franc::Times(uint16_t num) {
        auto new_item = std::make_shared<Franc>(this->amount);
        new_item->amount *= num;
        return new_item;
    }

    bool Franc::operator==(const Franc &rhs) const {
        bool result = (this->amount == rhs.amount);
        return result;
    }
}