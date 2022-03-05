//
// Created by Zhai Lintao on 2022/3/5.
//

#ifndef SRC_MONEY_H_
#define SRC_MONEY_H_

#include <cstdint>
#include <memory>

namespace TDD {
    class Money {
    public:
        Money(int amount);

    protected:
        bool Equals(const Money &rhs) const;

    protected:
        int amount = 0;
    };
}

#endif //SRC_MONEY_H_
