#include <iostream>
#include <string>

#include "Human.h"

using namespace std;

Human::Human(){}

string Human::getName() {
    string new_name;

    cout << "Enter name: ";

    cin >> new_name;

    name = new_name;
}

char Human::makeMove() {
    char new_move;

    cout << "Enter move: ";
    cin >> new_move;

    move = new_move;

    return move;
}