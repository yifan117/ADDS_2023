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