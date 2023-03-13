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

#include <string>
#include <vector>

Factory::Factory() {}

Move* Factory::assign_move(std::string move) {
    std::string temp = move;

    Move* selected;

    if (move == "Rock") {
        selected = new Rock();
    } else if (move == "Paper") {
        selected = new Paper();
    } else if (move == "Scissors") {
        selected = new Scissors();
    } else if (move == "Robot") {
        selected = new Robot();
    } else if (move == "Monkey") {
        selected = new Monkey();
    } else if (move == "Pirate") {
        selected = new Pirate();
    } else if (move == "Ninja") {
        selected = new Ninja();
    } else if (move == "Zombie") {
        selected = new Zombie();
    }

    return selected;
}