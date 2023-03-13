/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"

class MoveFactory {
    public:
        MoveFactory();
        
        Move* assign_move(std::string move);
};

#endif