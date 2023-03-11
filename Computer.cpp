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

    this->move->name = "Rock";

    return move; 
}
