#include <iostream>
#include <string>

#include "Computer.h"

using namespace std;

Computer::Computer(){}

string Computer::getName() {
    name = "Computer";

    return name;
}

char Computer::makeMove() { return 'R'; }
