#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class Computer : public Player {
    public:
        Computer();

        Move* move = new Move();
        std::string getName();
        Move* makeMove();
};

#endif