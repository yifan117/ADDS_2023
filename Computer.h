#include "Player.h"
#include <iostream>
#include <string>
#pragma once

class Computer : public Player {
    public:
        Computer();

        char makeMove();
};