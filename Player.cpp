#include "Player.h"
#include <iostream>
#include <string>

Player::Player(){
    this->name = "Unnamed Player";
}

Move* Player::makeMove() {

    return move;
}

std::string Player::getName() {
    return this->name;
}

