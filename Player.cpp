#include "Player.h"
#include <iostream>
#include <string>

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"

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