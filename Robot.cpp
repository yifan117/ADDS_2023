#include "Robot.h"

Robot::Robot() {
    setName("Robot");
    setMovesBeaten({"Ninja", "Zombie"});
}

std::string Robot::getName() {
        return this->name;
}

void Robot::setName(std::string new_name) {
    this->name = new_name;
}

void Robot::setMovesBeaten(std::unordered_set<std::string> moves_list) {
    this->moves_beaten = moves_list;
}