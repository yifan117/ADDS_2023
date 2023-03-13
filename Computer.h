#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "moveFactory.h"
#include "Move.h"

#include <string>

class Computer : public Player {
    public:
        Computer();

        std::string getName();
        Move* makeMove();
};

#endif