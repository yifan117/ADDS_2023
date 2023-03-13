/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
    public:
        Zombie();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif