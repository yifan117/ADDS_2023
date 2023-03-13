#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "MoveFactory.h"
#include "Move.h"

class Player {
    public:

        Player();
        std::string name = "Default";
        

        virtual std::string getName() = 0;
        virtual Move* makeMove() = 0;
};

#endif