#include "Referee.h"
#include <iostream>
#include <string>

using namespace std;

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2) {
    if (player1->move == player2->move) return nullptr;

    if (player1->move == 'R') {
        if (player2->move == 'S') return player1;
        if (player2->move == 'P') return player2;
    }

    if (player1->move == 'P') {
        if (player2->move == 'S') return player2;
        if (player2->move == 'R') return player1;
    }

    if (player1->move == 'S') {
        if (player2->move == 'R') return player2;
        if (player2->move == 'P') return player1;
    }
    
    return nullptr;
}