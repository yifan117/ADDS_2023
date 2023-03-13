/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "MoveFactory.h"

#include <iostream>

class Player {
    public:

        Player();
        std::string name = "Default";
        

        virtual std::string getName() = 0;
        virtual Move* makeMove() = 0;
};

#endif