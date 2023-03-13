/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "Paper.h"

Paper::Paper() {
    setName("Paper");
    setMovesBeaten({"Rock"});
}

std::string Paper::getName() {
        return this->name;
}

void Paper::setName(std::string new_name) {
    this->name = new_name;
}

void Paper::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}