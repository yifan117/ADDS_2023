/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
    public:
        Scissors();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif