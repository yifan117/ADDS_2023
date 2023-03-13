/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
    public:
        Rock();
        
        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif