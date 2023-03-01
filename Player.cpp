#include "Player.h"
#include <iostream>
#include <string>

Player::Player(){
    this->name = "Unnamed Player";
    this->move = 'P';
}

// Player::Player(std::string player_name){
//     name = player_name;
//     move = 'S';
// }

char Player::makeMove() {
    char new_move;
    std::cout << "Enter move: ";

    std::cin >> new_move;
    this->move = toupper(new_move);

    return this->move;
}

std::string Player::getName() {
    return this->name;
}