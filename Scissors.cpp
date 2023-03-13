#include "Scissors.h"

Scissors::Scissors() {
    setName("Scissors");
    setMovesBeaten({"Paper"});
}

std::string Scissors::getName() {
        return this->name;
}

void Scissors::setName(std::string new_name) {
    this->name = new_name;
}

void Scissors::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}