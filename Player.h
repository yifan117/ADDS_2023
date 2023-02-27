#include <iostream>
#include <string>
#pragma once

using namespace std;

class Player {
    public:
        char move = 'R';
        string name = "Default";

        Player();

        virtual string getName();
        virtual char makeMove();
};