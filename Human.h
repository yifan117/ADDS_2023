#include <iostream>
#include <string>
#include "Player.h"
#pragma once

using namespace std;

class Human : public Player {
    public:
        char h_move;
        string h_name = "Human";
        
        Human(string new_name);
        Human();

        string getName();
        char makeMove(char new_move);
        char makeMove();
};