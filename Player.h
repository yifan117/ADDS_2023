#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
    public:
        Player();
        // Player(std::string player_name);

        char move = 'R';
        std::string name = "Computer";

        virtual std::string getName() = 0;
        virtual char makeMove() = 0;
  
        // std::string getName();
        // char makeMove();
};

#endif