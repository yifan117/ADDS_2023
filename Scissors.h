#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <vector>
#include <string>

class Scissors : public Move {
    public:
        Scissors();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif