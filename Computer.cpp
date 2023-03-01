#include <iostream>
#include <string>

#include "Computer.h"

Computer::Computer(){ 
    this->name = "Computer";
    this->move = 'R';
}

std::string Computer::getName() {
    this->name = "Computer";

    return this->name;
}

char Computer::makeMove() { return 'R'; }
