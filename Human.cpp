#include <iostream>
#include <string>

#include "Human.h"

Human::Human(std::string new_name) { 
    this->name = new_name;
    this->move = makeMove();
    // std::cout << "Enter move: ";

    // std::cin >> move;

    // move = toupper(move);
}

Human::Human() { 
    this->name = "Human";
    this->move = makeMove();
    
    // std::cout << "Enter move: ";

    // std::cin >> move;

    // move = toupper(move);
}

std::string Human::getName() {
    return this->name;
}

char Human::makeMove(char new_move) {

    this->move = toupper(new_move);

    return this->move;
}

char Human::makeMove() {
    char new_move;

    std::cout << "Enter move: ";

    std::cin >> new_move;

    this->move = toupper(new_move);

    return this->move;
}