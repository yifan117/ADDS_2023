#include "Referee.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    if (p1move->moves_beaten.find(p2move->name) != p1move->moves_beaten.end()) return player1;

    if (p2move->moves_beaten.find(p1move->name) != p2move->moves_beaten.end()) return player2;

    return nullptr; // occurs if moves are incompatible ("Rock" vs "Ninja")
}