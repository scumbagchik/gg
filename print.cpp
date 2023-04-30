#include "inout.h"
#include <iostream>

void print(const std::vector<int>& vec) {
    for (auto& elem : vec) {
        std::cout << elem << std::endl;
    }
}