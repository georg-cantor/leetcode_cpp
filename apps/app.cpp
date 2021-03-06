#include <fmt/format.h>
#include <solutions/lib.hpp>

int main() {
    int total = 0;
    std::vector<int> v;
    for (int i = 3; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            v.push_back(i);
            total += i;
        }
    }
    fmt::print("{}\n", fmt::join(v, ", "));
    fmt::print("The sum of all the multiples of 3 or 5 below 1000: {}\n", total);
    fmt::print("Factorial(10): {}\n", Factorial(10));
    return 0;
}
