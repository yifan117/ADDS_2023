/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

#include <string>

class Computer : public Player {
    public:
        Computer();

        std::string getName();
        Move* makeMove();
};

#endif