#include "./Referee.h"

Referee::Referee() {}

char Referee::refGame(Human human, Computer computer) {
    char ret;

    char mv1 = human.makeMove();
    char mv2 = computer.makeMove();

    if ((mv1 == 'P' && mv2 == 'R') || (mv1 == 'R' && mv2 == 'S') || (mv1 == 'S' && mv2 == 'P')) { ret = 'W'; }
    else if ((mv1 == 'S' && mv2 == 'S') || (mv1 == 'P' && mv2 == 'P') || (mv1 == 'R' && mv2 == 'R')) { ret = 'T'; }
    else { ret = 'L'; }

    return ret;
}