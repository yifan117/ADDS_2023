#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>

class Move {
    public:
        Move();

        std::string name;
        std::vector<std::string> moves_beaten;

        virtual std::string getName() = 0;

};

#endif