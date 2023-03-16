#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include "Reverser.h"
#include <iostream>

int main() {
    Truckloads test;
    Reverser rtest;
    EfficientTruckloads etest;

    // std::cout << etest.numTrucks(1024,5) << std::endl;

    std::cout << rtest.reverseDigit(123) << std::endl;
    // std::cout << rtest.reverseString("12392") << std::endl;
}