#include "Move.h"

Move::Move(){}

std::string Move::getName() {
    return this->name;
}

void Move::setName(std::string new_name){};
void Move::setMovesBeaten(std::vector<std::string> moves_list){};