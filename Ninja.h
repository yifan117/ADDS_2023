#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
    public:
        Ninja();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif