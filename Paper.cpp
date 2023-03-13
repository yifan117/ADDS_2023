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

void Paper::setMovesBeaten(std::vector<std::string> moves_list) {
    this->moves_beaten = moves_list;
}