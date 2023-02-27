#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include <vector>

using namespace std;

int main() {
    Human* human = new Human("asd");
    Human* human2 = new Human();
    Computer* computer = new Computer();
    Referee* referee = new Referee();
    Player* winner = new Player();
    vector<char> results = {'s', 'p', 'r', 's'};

    for (auto result : results) {
        human->makeMove(result);
        
        winner = referee->refGame(human, computer);

        if (winner) cout << winner->name << endl;
        else cout << "Tie" << endl;
    }
}

