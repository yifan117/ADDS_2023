#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <vector>
#include <string>

class Rock : public Move {
    public:
        Rock();
        
        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif