#include "../object.h"
#include <cassert>
#include <iostream>


void test();

int main() {
    test();
    return 0;
}

//------------------------  TESTS  ------------------------------

void test() {
    Object o;

    o.setValue(1);
    assert(o.getValue());
    std::cout << "\033[32m" << "Running test()........OK" << "\033[0m" << std::endl;
}
