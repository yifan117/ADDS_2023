#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include <vector>

#include "moveFactory.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"

int main() {
    Computer* computer = new Computer();
    std::vector<char> results = {'s', 'p', 'r', 's'};
    Referee* referee = new Referee();
    Human* human = new Human();
    Player* winner;

    for (auto result : results) {
        // human->makeMove();
        winner = referee->refGame(human, computer);

        if (winner) std::cout << winner->name << std::endl;
        else std::cout << "Tie" << std::endl;
    }

    // for (auto result : results) {
    //     // human->makeMove();
    //     Human* human = new Human();
    //     Human* human2 = new Human("mark");

    //     if (referee->refGame(human, human2)) std::cout << referee->refGame(human, human2)->name << std::endl;
    //     else std::cout << "Tie" << std::endl;
    // }
}

