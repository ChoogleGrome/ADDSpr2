#include <iostream>

#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main(void) {
    Referee ref;
    Human human;
    Computer comp;

    std::cout << ref.refGame(human, comp) << std::endl;

    return 0;
}