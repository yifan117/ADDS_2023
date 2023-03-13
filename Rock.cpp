#include "Rock.h"

Rock::Rock() {
    setName("Rock");
    setMovesBeaten({"Scissors"});
}

std::string Rock::getName() {
        return this->name;
}

void Rock::setName(std::string new_name) {
    this->name = new_name;
}

void Rock::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}