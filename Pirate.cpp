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

void Pirate::setMovesBeaten(std::vector<std::string> moves_list) {
    this->moves_beaten = moves_list;
}