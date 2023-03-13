#include "Ninja.h"

Ninja::Ninja() {
    setName("Ninja");
    setMovesBeaten({"Pirate", "Zombie"});
}

std::string Ninja::getName() {
        return this->name;
}

void Ninja::setName(std::string new_name) {
    this->name = new_name;
}

void Ninja::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}