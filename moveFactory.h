#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include <string>

class Factory {
    public:
        Factory();
        
        Move* assign_move(std::string move);
};

#endif