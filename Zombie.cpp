/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "Zombie.h"

Zombie::Zombie() {
    setName("Zombie");
    setMovesBeaten({"Pirate", "Monkey"});
}

std::string Zombie::getName() {
        return this->name;
}

void Zombie::setName(std::string new_name) {
    this->name = new_name;
}

void Zombie::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}