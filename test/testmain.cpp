#include "../object.h"
#include <cassert>
#include <iostream>
#include<unistd.h>

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
    std::cout << "\033[31;44m" << "Running test()........OK" << "\033[0m" << std::endl;
    std::cout << "\033[35m" << "Running test()........OK" << "\033[0m" << std::endl;
    std::cout << "\033[04m" << "Running test()........OK" << "\033[0m" << std::endl;
    std::cout << "\033[44;93;5;3;1m" << "Running test()........OK" << "\033[0m" << std::endl;


    for(int i=0; i<255; i++) {
        if (i > 9 && i < 29) continue;
        if (i > 49 && i < 89) continue;
        if (i > 109) continue;

        std::cout << "i=" << i << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }

    // std::cout << 0xD83C << 0xDF7A << std::endl; // utf-16
    // std::cout << 0xF0 << 0x9F << 0x8D << 0xBA << std::endl; // utf-8

    unsigned int milisecond = 1000;

    std::cout << "\u23F0" << std::flush;

    for(int i = 0; i < 30; i++) {
        usleep(500 * milisecond); //sleeps for 0.5 second
        std::cout << "\033[32m\033[1m.\033[0m" << std::flush; // 32m - green, 1 - bold
    }
    
    std::cout << "\u2615\n";
}