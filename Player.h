#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Move.h"

class Player {
    public:

        std::string name = "Default";
        
        Player();

        virtual std::string getName() = 0;
        virtual Move* makeMove() = 0;
};

#endif