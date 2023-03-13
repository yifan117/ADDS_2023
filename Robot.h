#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move {
    public:
        Robot();

        std::string getName();
        void setName(std::string new_name);
        void setMovesBeaten(std::unordered_set<std::string> moves_list);
};

#endif