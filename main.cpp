#include <iostream>
#include <unistd.h>     // I use "usleep()" from this library

void yellowExample();
void colorPalette();
void unicodeExample();
void progressExample();

int main () {
    yellowExample();
    colorPalette();
    unicodeExample();
    progressExample();
    
    return 0;
}

void yellowExample() {
    std::cout << "\033[33m" << "Testing Yellow (regular)" << "\033[0m" << std::endl;
    std::cout << "\033[33;1m" << "Testing Yellow (regular bold)" << "\033[0m" << std::endl;
    std::cout << "\033[33;7m" << "Testing Yellow (regular inverse)" << "\033[0m" << std::endl;
    std::cout << "\033[33;1;7m" << "Testing Yellow (regular bold inverse)" << "\033[0m" << std::endl;

    std::cout << "\033[33;2m" << "Testing Yellow (regular faint)" << "\033[0m" << std::endl;
    std::cout << "\033[33;1;2m" << "Testing Yellow (regular bold)" << "\033[0m" << std::endl;
    std::cout << "\033[33;7;2m" << "Testing Yellow (regular inverse)" << "\033[0m" << std::endl;
    std::cout << "\033[33;1;7;2m" << "Testing Yellow (regular faint bold inverse)" << "\033[0m" << std::endl;

    std::cout << "\033[93m" << "Testing Yellow (light)" << "\033[0m" << std::endl;
    std::cout << "\033[93;1m" << "Testing Yellow (light bold)" << "\033[0m" << std::endl;

    std::cout << "\033[93;2m" << "Testing Yellow (faint light)" << "\033[0m" << std::endl;
    std::cout << "\033[93;1;2m" << "Testing Yellow (faint light bold)" << "\033[0m" << std::endl;
}

void colorPalette() {
    char prev = std::cout.fill(' ');

    std::cout << "\n\nESC" << " | " << "\tExample\n";
    std::cout << "------------------------------------\n";

    for(int i=0; i < 10; i++) {
        std::cout.width(3);
        std::cout << std::right << i;
        
        std::cout.width(1);
        std::cout << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }

    for(int i=30; i < 38; i++) {
        std::cout.width(3);
        std::cout << std::right << i;
        
        std::cout.width(1);
        std::cout << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }
    for(int i=90; i < 98; i++) {
        std::cout.width(3);
        std::cout << std::right << i;
        
        std::cout.width(1);
        std::cout << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }
    for(int i=40; i < 48; i++) {
        std::cout.width(3);
        std::cout << std::right << i;
        
        std::cout.width(1);
        std::cout << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }
    for(int i=100; i < 108; i++) {
        std::cout.width(3);
        std::cout << std::right << i;
        
        std::cout.width(1);
        std::cout << "\t\033[" << i << "m" << "TEST test TEST 12345 .,:;!" << "\033[0m" << std::endl;
    }

    std::cout.fill(prev);
}

void unicodeExample() {
    // Examples of Unicode special characters output
    //-------------------------------------------------------
    // 1. 4 bytes code and more per character
    char bytesArray[4] = {'\xF0', '\x9F', '\x8D', '\xBB'};
    std::cout.write(bytesArray, sizeof bytesArray);
    
    // 2. Copy-pasted character (it is actually 4 bytes UTF-8)
    std::cout << "\n🍺\n";

    // 3. 2 bytes UTF-16 works just fine this way:
    std::cout << "\u23F0" << std::flush;
}

void progressExample() {
    unsigned int milisecond = 1000;

    // Example of animated progress bar
    //--------------------------------------------------------
    for(int i = 0; i < 30; i++) {
        usleep(500 * milisecond); //sleeps for 0.5 second
        std::cout << "\033[32m\033[1m.\033[0m" << std::flush; // 32m - green, 1 - bold
    }
    std::cout << "\u2615\n";
}