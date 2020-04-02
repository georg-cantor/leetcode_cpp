//
// Created by 秦栋梁 on 2020/4/2.
//

#include <fmt/format.h>
#include <solutions/lib.hpp>

int main() {
    int total = 0;
    for (int i = 3; i < 1001) {
        if (i % 3 == 0 || i % 5 == 0) {
            total += i;
        }
    }
    fmt::print("The sum of all the multiples of 3 or 5 below 1000: {}\n", total);
    return 0;
}

