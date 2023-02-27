#include <iostream>
#include <string>
#include "Player.h"
#pragma once

class Referee {
    public:
        Referee();

        Player* refGame(Player* player1, Player* player2);
};