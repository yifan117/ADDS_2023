#include <iostream>
#include <string>
#include "Player.h"
#pragma once

using namespace std;

class Human : public Player {
    public:
        Human();

        string getName();
        char makeMove();
};