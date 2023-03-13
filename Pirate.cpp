/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "Pirate.h"

Pirate::Pirate() {
    setName("Pirate");
    setMovesBeaten({"Robot", "Monkey"});
}

std::string Pirate::getName() {
        return this->name;
}

void Pirate::setName(std::string new_name) {
    this->name = new_name;
}

void Pirate::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}