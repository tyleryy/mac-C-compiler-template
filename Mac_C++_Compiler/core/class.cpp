#include "class.hpp"
#include <vector>
#include <iostream>

Thornton::Thornton(int num) {
    var = num;
}

void Thornton::eat() {
    for (int i = 0; i < var; i++)
    {
        std::cout << "Thornton is eating food" << std::endl;
    }
}