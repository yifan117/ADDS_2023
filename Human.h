#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"
#include "Move.h"
#include "MoveFactory.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
class Human : public Player {
    public:
        
        Human(std::string new_name);
        Human();

        std::string getName();
        Move* makeMove();
};

#endif