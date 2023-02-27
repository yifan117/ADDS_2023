#include <iostream>
#include <string>

#include "Human.h"

using namespace std;

Human::Human(string new_name){ name = new_name; }
Human::Human(){ name = "Human"; }

string Human::getName() {
    return name;
}

char Human::makeMove() {
    char new_move;

    cout << "Enter move:";
    cin >> new_move;

    move = toupper(new_move);

    return move;
}