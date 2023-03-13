/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move {
    public:
        Paper();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif