#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Move.h"

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Referee {
    public:
        Referee();

        Player* refGame(Player* player1, Player* player2);
};

#endif