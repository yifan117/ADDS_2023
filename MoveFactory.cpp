#include "MoveFactory.h"

MoveFactory::MoveFactory() {}

Move* MoveFactory::assign_move(std::string move) {

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