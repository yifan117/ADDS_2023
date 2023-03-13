#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <vector>
#include <string>

class Zombie : public Move {
    public:
        Zombie();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif