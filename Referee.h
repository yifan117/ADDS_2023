#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "Player.h"

class Referee {
    public:
        Referee();

        std::unordered_map<std::string, std::vector<std::string>> map;

        Player* refGame(Player* player1, Player* player2);
};

#endif