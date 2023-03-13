/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include <iostream>
#include <string>

#include "Computer.h"

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
