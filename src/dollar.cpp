//
// Created by Zhai Lintao on 2022/3/3.
//

#include "public/dollar.h"

namespace TDD {
    //返回新的对象
    std::shared_ptr<Dollar> Dollar::Times(uint16_t num) {
        std::shared_ptr<Dollar> new_item = std::make_shared<Dollar>(amount);
        new_item->amount *= num;
        return new_item;
    }

    Dollar::Dollar(int amount) : amount(amount) {

    }

    bool Dollar::Equals(std::shared_ptr<Dollar> lhs) {
        return true;
    }
}

