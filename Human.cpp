#include <iostream>
#include <string>

#include "Human.h"

Human::Human(std::string new_name) { 
    name = new_name;
    move = 'P';
    std::cout << "Enter move: ";

    std::cin >> move;

    move = toupper(move);
}

Human::Human() { 
    name = "Human";
    move = 'P';
    
    std::cout << "Enter move: ";

    std::cin >> move;

    move = toupper(move);
}

std::string Human::getName() {
    return name;
}

char Human::makeMove(char new_move) {

    move = toupper(new_move);

    return move;
}

char Human::makeMove() {
    char new_move;

    std::cout << "Enter move: ";

    std::cin >> new_move;

    this->move = toupper(new_move);

    return this->move;
}