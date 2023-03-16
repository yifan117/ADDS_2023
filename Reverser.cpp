#include "Reverser.h"
#include <iostream>

int Reverser::reverseDigit(int num) {

    if (first && num < 0) return -1;
    if (num <= 0) return digitAns;

    // if (first) {
    //     std::string err_check = std::to_string(num);
    //     if (err_check[err_check.length() - 1] == '0') return -1;
    // }

    first = false;

    // try {

        digitAns = digitAns * 10 + num % 10;

    // } catch (std::out_of_range) {
    //     return -1;
    // }



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