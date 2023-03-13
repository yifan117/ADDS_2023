#include <iostream>
#include <string>

#include "Computer.h"

#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"

Computer::Computer(){ 
    this->name = "Computer";
}

std::string Computer::getName() {
    this->name = "Computer";

    return this->name;
}

Move* Computer::makeMove() {     
    MoveFactory* factory = new MoveFactory();
    
    return factory->assign_move("Rock");
}
