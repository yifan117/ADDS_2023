#ifndef REVERSER_H
#define REVERSER_H

#include <string>
#include <iostream>
#include <limits.h>
#include <algorithm>

class Reverser {
    public:
        int digitAns = 0;
        bool first = true;
        int left = 0;
        int right = INT_MAX;
        int reverseDigit(int num);
        std::string reverseString(std::string characters);
};

#endif