/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "Move.h"
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

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

