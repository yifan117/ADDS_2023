#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include "Player.h"

class Referee {
    public:
        Referee();

        Player* refGame(Player* player1, Player* player2);
};

#endif