#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    Human* human = new Human("asd");
    Computer* computer = new Computer();
    Referee* referee = new Referee();
    Player* winner = new Player();

    human->getName();
    human->makeMove();
    computer->getName();
    computer->makeMove();

    winner = referee->refGame(human, computer);

    if (winner) cout << winner->name << endl;
    else cout << "Tie" << endl;
}

