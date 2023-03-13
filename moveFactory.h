#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include <string>

class MoveFactory {
    public:
        MoveFactory();
        
        Move* assign_move(std::string move);
};

#endif