#include <iostream>
#include <string>

#include "Human.h"

using namespace std;

Human::Human(string new_name) { 
    name = new_name;
    // cout << "Enter move: ";

    // cin >> move;
}

Human::Human() { 
    name = "Human";
    
    // cout << "Enter move: ";

    // cin >> move;
}

string Human::getName() {
    return name;
}

char Human::makeMove(char new_move) {

    move = toupper(new_move);

    return move;
}

char Human::makeMove() {

    cout << "Enter move: ";

    cin >> move;

    move = toupper(move);

    return move;
}