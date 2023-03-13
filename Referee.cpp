#include "Referee.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

Referee::Referee(){
    map["Monkey"] = {"Robot", "Ninja"};
    map["Robot"] = {"Ninja", "Zombie"};
    map["Pirate"] = {"Robot", "Monkey"};
    map["Ninja"] = {"Pirate", "Zombie"};
    map["Zombie"] = {"Pirate", "Monkey", "Rock"};
    map["Rock"] = {"Scissors"};
    map["Paper"] = {"Rock"};
    map["Scissors"] = {"Paper"};
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();
    std::vector<std::string> movesBeaten;


    if (p1move->name == p2move->name) {
        return nullptr;
    }

    if (map.find(p1move->name) != map.end()) {
        movesBeaten = map[p1move->name];

        if (std::find(movesBeaten.begin(), movesBeaten.end(), p2move->name) != movesBeaten.end()) {
            return player1;
        }
    }

    if (map.find(p2move->name) != map.end()) {
        movesBeaten = map[p2move->name];

        if (std::find(movesBeaten.begin(), movesBeaten.end(), p1move->name) != movesBeaten.end()) {
            return player2;
        }
    }

    return nullptr; // occurs if moves are incompatible ("Rock" vs "Ninja")
}