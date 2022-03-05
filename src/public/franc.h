//
// Created by Zhai Lintao on 2022/3/5.
//

#ifndef SRC_PUBLIC_FRANC_H_
#define SRC_PUBLIC_FRANC_H_
#include "money.h"

namespace TDD {
    class Franc : public Money{
    public:
        Franc(int amount);

        std::shared_ptr <Franc> Times(uint16_t num);

        bool operator==(const Franc &rhs) const;

    private:
        int amount;
    };
}

#endif //SRC_PUBLIC_FRANC_H_
