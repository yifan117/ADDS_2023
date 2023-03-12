#include "Player.h"
#include <iostream>
#include <string>
#include "Move.h"

Player::Player(){
    this->name = "Unnamed Player";
}

Move* Player::makeMove() {

    Move* move = new Move();

    return move;
}

std::string Player::getName() {
    return this->name;
}

