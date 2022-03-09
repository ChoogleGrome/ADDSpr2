#include "./Human.h"
#include <iostream>

Human::Human() {}

char Human::makeMove() {
    char ret;

    while (true) {
        std::cout << "Enter Move (UPPERCASE): ";
        std::cin >> ret;
        // std::cout << std::endl;

        if (ret == 'P' || ret == 'R' || ret == 'S') {
            break;
        } else {
            std::cout << "Wrong input, try again" << std::endl;
        }
    }

    return ret;
}