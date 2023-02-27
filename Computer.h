#include "Player.h"
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Computer : public Player {
    public:
        Computer();

        string getName();
        char makeMove();
};