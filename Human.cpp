#include <iostream>
#include <string>

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

    std::string new_move;
    // std::cout << "Enter move: ";

    std::cin >> new_move;

    new_move[0] = toupper(new_move[0]);

    this->move->name = new_move;

    return move;
}