#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(){}
Player::Player(string new_name) { name = new_name; }

char Player::makeMove() { 
    char new_move;

    cin >> new_move;

    move = toupper(new_move);

    return move;
}

string Player::getName() { return name; }