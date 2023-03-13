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
        virtual void setName(std::string new_name) = 0;
        virtual void setMovesBeaten(std::vector<std::string> moves_list) = 0;


};

#endif