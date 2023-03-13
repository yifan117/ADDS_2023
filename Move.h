/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <vector>
#include <unordered_set>

class Move {
    public:
        Move();

        std::string name;
        std::unordered_set<std::string> moves_beaten;

        virtual std::string getName() = 0;
        virtual void setName(std::string new_name) = 0;
        virtual void setMovesBeaten(std::unordered_set<std::string> moves_list) = 0;


};

#endif