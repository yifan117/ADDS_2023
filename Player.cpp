#include "Player.h"
#include <iostream>
#include <string>
#include "Move.h"

Player::Player(){
    this->name = "Unnamed Player";
}

Move* makeMove() {

    Move* move = new Move();

    move->name = "Scissors";

    return move;
}

std::string Player::getName() {
    return this->name;
}

