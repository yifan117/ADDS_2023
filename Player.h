#include <iostream>
#include <string>
#pragma once

using namespace std;

class Player {
    public:
        char move = 'P';
        string name = "Default";

        Player();

        virtual string getName() = 0;
        virtual char makeMove() = 0;
};