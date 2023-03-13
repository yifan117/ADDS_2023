/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "MoveFactory.h"

MoveFactory::MoveFactory() {}

Move* MoveFactory::assign_move(std::string move) { // instantiates a Move object based on the string passed in

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