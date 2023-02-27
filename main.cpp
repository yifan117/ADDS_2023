#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    Human* human = new Human("asd");
    Human* human2 = new Human();
    Computer* computer = new Computer();
    Referee* referee = new Referee();
    Player* winner = new Player();

    winner = referee->refGame(human, human2);

    if (winner) cout << winner->name << endl;
    else cout << "Tie" << endl;
}

