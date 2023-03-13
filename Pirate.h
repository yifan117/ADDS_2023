#ifndef PIRATE_H
#define PIRATE_H

#include <vector>
#include <string>
#include "Move.h"

class Pirate : public Move {
    public:
        Pirate();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif