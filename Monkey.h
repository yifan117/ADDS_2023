/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
    public:
        Monkey();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif