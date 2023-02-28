#include <iostream>
#include <string>

#include "Computer.h"

Computer::Computer(){ 
    name = "Computer";
    move = 'R';
}

std::string Computer::getName() {
    name = "Computer";

    return name;
}

char Computer::makeMove() { return 'R'; }
