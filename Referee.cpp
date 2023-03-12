#include "Referee.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "Move.h"

Referee::Referee(){}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    std::unordered_map<std::string, std::vector<std::string>> mp;

    mp["Monkey"] = {"Robot", "Ninja"};
    mp["Robot"] = {"Ninja", "Zombie"};
    mp["Pirate"] = {"Robot", "Monkey"};
    mp["Ninja"] = {"Pirate", "Zombie"};
    mp["Zombie"] = {"Pirate", "Monkey"};
    mp["Rock"] = {"Scissors"};
    mp["Paper"] = {"Rock"};
    mp["Scissors"] = {"Paper"};

    if (p1move->name == p2move->name) {
        return nullptr;
    }

    if (mp.find(p1move->name) != mp.end()) {
        for (std::string option : mp[p1move->name]) {
            if (option == p2move->name) return player1;
        }

        return player2;
    }

    std::cout << "got here" << std::endl; // should never happen
    return nullptr;
}