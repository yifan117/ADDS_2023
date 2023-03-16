#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int num) {

    std::cout << num << std::endl;
    if (num <= 0) return digitAns;

    // if (first && num < 10) return -1;

    first = false;

    digitAns = digitAns * 10 + num % 10;

    return reverseDigit(num/10);
}

std::string Reverser::reverseString(std::string characters) {
    if (right == INT_MAX) {
        right = characters.length() - 1;
    }

    // if (characters.length() < 2) return "ERROR";

    if (left >= right) return characters;

    char temp = characters[left];

    characters[left] = characters[right];

    characters[right] = temp;

    right--;
    left++;

    return reverseString(characters);
}