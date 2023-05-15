#include "Autocomplete.h"
#include <iostream>
#include "PrefixMatcher.h"

int main() {
    // Autocomplete j;
    PrefixMatcher j;

    // j.insert("bin");
    // j.insert("ball");
    // j.insert("ballet");

    j.insert("110011011101", 1);
    j.insert("110011011", 2);
    j.insert("11001101", 3);

    std::cout << j.selectRouter("11001101110") << std::endl; // should return 1
    std::cout << j.selectRouter("11001101") << std::endl; // should return 2
    std::cout << j.selectRouter("1100") << std::endl; // should return 1
    std::cout << j.selectRouter("1111") << std::endl; // should return -1
    std::cout << j.selectRouter("1") << std::endl; // should return 1
    std::cout << j.selectRouter("11001101110101010101") << std::endl; // should return 1

    // std::vector<std::string> suggestions;

    // suggestions = j.getSuggestions("b");

    // for (auto c : suggestions) {
    //     std::cout << c << std::endl;
    // }

    // std::cout << "\n \n";

    // suggestions = j.getSuggestions("ba");

    // for (auto c : suggestions) {
    //     std::cout << c << std::endl;
    // }

    // std::cout << "\n \n";

    // suggestions = j.getSuggestions("bal");

    // for (auto c : suggestions) {
    //     std::cout << c << std::endl;
    // }

    // std::cout << "\n \n";
}