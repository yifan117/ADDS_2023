#include "Player.h"
#include <iostream>
#include <string>

Player::Player(){
    name = "Unnamed Player";
    move = 'P';
}

// Player::Player(std::string player_name){
//     name = player_name;
//     move = 'S';
// }

char Player::makeMove() {
    char new_move;
    std::cout << "Enter move: ";

    std::cin >> new_move;
    move = toupper(new_move);

    return move;
}

std::string Player::getName() {
    return name;
}