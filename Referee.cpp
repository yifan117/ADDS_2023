#include "Referee.h"
#include <iostream>
#include <string>

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2) {

    // cout << "player 1: " << player1->name << " " << player1->move << " " << "player 2: " << player2->name << " " << player2->move << endl;
    if (player1->move == player2->move) {
        return nullptr;
    }

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

    std::cout << "got here" << std::endl; // should never happen
    return nullptr;
}