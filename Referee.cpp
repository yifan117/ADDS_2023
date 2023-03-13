#include "Referee.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

Referee::Referee(){
    mp["Monkey"] = {"Robot", "Ninja"};
    mp["Robot"] = {"Ninja", "Zombie"};
    mp["Pirate"] = {"Robot", "Monkey"};
    mp["Ninja"] = {"Pirate", "Zombie"};
    mp["Zombie"] = {"Pirate", "Monkey", "Rock"};
    mp["Rock"] = {"Scissors"};
    mp["Paper"] = {"Rock"};
    mp["Scissors"] = {"Paper"};
}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    if (mp.find(p1move->name) != mp.end()) {

        for (std::string option : mp[p1move->name]) {
            if (option == p2move->name) return player1;
        }
    }

    if (mp.find(p2move->name) != mp.end()) {

        for (std::string option : mp[p2move->name]) {
            if (option == p1move->name) return player2;
        }
    }

    return nullptr; // occurs if moves are incompatible ("Rock" vs "Ninja")
}