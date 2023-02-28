#include <iostream>
#include <string>
#pragma once

class Player {
    public:
        char move = 'R';
        std::string name = "Computer";

        Player();

        virtual std::string getName();
        virtual char makeMove();
};