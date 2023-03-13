#include "Monkey.h"

Monkey::Monkey() {
    setName("Monkey");
    setMovesBeaten({"Robot", "Ninja"});
}

std::string Monkey::getName() {
        return this->name;
}

void Monkey::setName(std::string new_name) {
    this->name = new_name;
}

void Monkey::setMovesBeaten(std::vector<std::string> moves_list) {
    this->moves_beaten = moves_list;
}