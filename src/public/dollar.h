//
// Created by Zhai Lintao on 2022/3/3.
//

#ifndef SRC_DOLLAR_H_
#define SRC_DOLLAR_H_
#include <cstdint>
#include <memory>
namespace TDD{
    class Dollar {
    public:
        Dollar(int amount);
        std::shared_ptr<Dollar> Times(uint16_t num);
        bool Equals(std::shared_ptr<Dollar> lhs);
        int amount;
    };
}
#endif //SRC_DOLLAR_H_
