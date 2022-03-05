//
// Created by Zhai Lintao on 2022/3/3.
//

#include "public/dollar.h"

namespace TDD {
    Dollar::Dollar(int amount) : Money(amount) {

    }

    //返回新的对象
    std::shared_ptr<Dollar> Dollar::Times(uint16_t num) {
        std::shared_ptr<Dollar> new_item = std::make_shared<Dollar>(amount);
        new_item->amount *= num;
        return new_item;
    }

    bool Dollar::operator==(const Dollar &rhs) const {
        auto base = static_cast<Money>(rhs);
        return Equals(base);
    }

}

