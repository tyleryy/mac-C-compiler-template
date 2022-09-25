#include <iostream>
#include <vector>
#include "../core/test.hpp"
#include "../core/test2.hpp"
#include "../core/class.hpp"

int main() {
    const auto x = 5;
    std::vector<int> y {1,2,3};
    std::cout << "Hello World! and you too :) " << std::endl;
    boo(4);
    print("Testing 1 2 3");

    Thornton t = Thornton(1);
    t.eat();

    return 0;
}