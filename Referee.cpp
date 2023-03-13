#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    for (std::string move : p1move->moves_beaten) {
        if (move == p2move->name) return player1;
    }

    for (std::string move : p2move->moves_beaten) {
        if (move == p1move->name) return player2;
    }

    return nullptr; // occurs if moves are incompatible ("Rock" vs "Ninja")
}