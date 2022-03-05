//
// Created by Zhai Lintao on 2022/3/3.
//

#ifndef SRC_DOLLAR_H_
#define SRC_DOLLAR_H_

#include "money.h"

namespace TDD {
    class Dollar : public Money{
    public:
        Dollar(int amount);

        std::shared_ptr<Dollar> Times(uint16_t num);
        //类比较重载等于
        bool operator==(const Dollar &rhs) const;
    };
}
#endif //SRC_DOLLAR_H_
