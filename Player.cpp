#include "Player.h"

Player::Player(){
    this->name = "Unnamed Player";
}

std::string Player::getName() {
    return this->name;
}

Move* Player::makeMove() {
    Move* temp = new Rock();

    return temp;
}