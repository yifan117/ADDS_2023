#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
#include <vector>
#include <string>

class Monkey : public Move {
    public:
        Monkey();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::vector<std::string> moves_list);
};

#endif