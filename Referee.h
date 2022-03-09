#ifndef REFEREE_H
#define REFEREE_H

#include "./Human.h"
#include "./Computer.h"

class Referee {
    public:
        Referee();
        char refGame(Human human, Computer computer); // W, T or L
};

#endif