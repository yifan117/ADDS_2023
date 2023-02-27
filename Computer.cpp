#include <iostream>
#include <string>

#include "Computer.h"

using namespace std;

Computer::Computer(){ 
    name = "Computer";
    move = 'R';
}

string Computer::getName() {
    name = "Computer";

    return name;
}

char Computer::makeMove() { return 'R'; }
