#include <iostream>
#include <string>
#include "Player.h"
#pragma once

class Human : public Player {
    public:
        
        Human(std::string new_name);
        Human();

        std::string getName();
        char makeMove(char new_move);
        char makeMove();
};