#include <string>
#include <iostream>

#include "Move.h"

Move::Move() {
    this->name = "Scissors";
}

std::string Move::getName() {
    return this->name;
}