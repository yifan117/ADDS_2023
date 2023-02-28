#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include <vector>

int main() {
    Computer* computer = new Computer();
    std::vector<char> results = {'s', 'p', 'r', 's'};
    Referee* referee = new Referee();

    for (auto result : results) {
        // human->makeMove();
        Human* human = new Human();
        Computer* computer = new Computer();

        if (referee->refGame(human, computer)) std::cout << referee->refGame(human, computer)->name << std::endl;
        else std::cout << "Tie" << std::endl;
    }
}

