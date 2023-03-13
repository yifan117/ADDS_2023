/*
Group members:
Yifan Lu a1800801
Lara Grocke a1802741
*/

#include "Human.h"

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

    MoveFactory* factory = new MoveFactory();

    std::string new_move;

    std::cout << "Enter move: ";

    std::cin >> new_move;

    new_move[0] = toupper(new_move[0]);

    return factory->assign_move(new_move);
}