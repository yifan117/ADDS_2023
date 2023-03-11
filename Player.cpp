#include "Player.h"
#include <iostream>
#include <string>

Player::Player(){
    this->name = "Unnamed Player";
}

Move* Player::makeMove() {

    std::string new_move;
    std::cout << "Enter move: ";

    std::cin >> new_move;

    this->move->name = new_move;

    return move;
}

std::string Player::getName() {
    return this->name;
}

