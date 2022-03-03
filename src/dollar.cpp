//
// Created by Zhai Lintao on 2022/3/3.
//

#include "public/dollar.h"

int Dollar::times(uint16_t num) {
    amount = amount * num;
    return amount;
}

Dollar::Dollar(int amount) : amount(amount) {

}
