#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include "moveFactory.h"
#include <vector>
#include <string>

class Paper : public Move {
    public:
        Paper();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif