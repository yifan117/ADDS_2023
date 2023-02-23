#include <iostream>

#include "Human.h"

using namespace std;

Human::Human(){}

void Human::set_name() {
    string new_name;

    cout << "Enter name: ";

    cin >> new_name;

    name = new_name;
}

string Human::get_move() {
    string new_move;

    cout << "Enter move: ";
    cin >> new_move;

    input = new_move;

    return input;
}