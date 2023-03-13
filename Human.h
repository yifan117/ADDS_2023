/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
    public:
        
        Human(std::string new_name);
        Human();

        std::string getName();
        Move* makeMove();
};

#endif