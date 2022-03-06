//
// Created by Zhai Lintao on 2022/3/5.
//

#ifndef SRC_MONEY_H_
#define SRC_MONEY_H_

#include <cstdint>
#include <memory>

namespace TDD {
    class Money;

    class MoneyInterface {
    public:
        virtual std::shared_ptr<Money> Times(uint16_t num) = 0;
    };

    class Money : public MoneyInterface {
    public:
        Money(int amount);

    protected:
        bool Equals(const Money *rhs) const;

        void TimeImpl(std::shared_ptr<Money> new_item, uint16_t num);


    protected:
        int amount = 0;
    };
}

#endif //SRC_MONEY_H_
