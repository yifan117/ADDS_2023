#include <iostream>
#include <string>

#include "Human.h"

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

Human::Human(std::string new_name) { 
    this->name = new_name;
    // std::cout << "Enter move: ";

    // std::cin >> move;

    // move = toupper(move);
}

Human::Human() { 
    this->name = "Human";
    
    // std::cout << "Enter move: ";

    // std::cin >> move;

    // move = toupper(move);
}

std::string Human::getName() {
    return this->name;
}

Move* Human::makeMove() {

    Factory* factory = new Factory();

    std::string new_move;
    // std::cout << "Enter move: ";

    std::cin >> new_move;

    new_move[0] = toupper(new_move[0]);

    return factory->assign_move(new_move);
}