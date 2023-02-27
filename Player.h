#include <iostream>
#include <string>
#pragma once

using namespace std;

class Player {
    public:
        char move = 'R';
        string name = "Computer";

        Player();

        virtual string getName();
        virtual char makeMove();
};