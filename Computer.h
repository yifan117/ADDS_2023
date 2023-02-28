#include "Player.h"
#include <string>
#pragma once

class Computer : public Player {
    public:

        Computer();

        std::string getName();
        char makeMove();
};