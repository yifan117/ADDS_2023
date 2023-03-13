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

    if (map.find(p1move->name) != map.end()) {

        for (std::string option : map[p1move->name]) {
            if (option == p2move->name) return player1;
        }
    }

    if (map.find(p2move->name) != map.end()) {

        for (std::string option : map[p2move->name]) {
            if (option == p1move->name) return player2;
        }
    }

    return nullptr; // occurs if moves are incompatible ("Rock" vs "Ninja")
}