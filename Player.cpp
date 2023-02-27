#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(){}

char Player::makeMove() { return 'R'; }
string Player::getName() { return "Computer"; }