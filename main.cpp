#include "Autocomplete.h"
#include <iostream>

int main() {
    Autocomplete j;

    j.insert("bin");
    j.insert("ball");
    j.insert("ballet");

    std::vector<std::string> suggestions;

    suggestions = j.getSuggestions("b");

    for (auto c : suggestions) {
        std::cout << c << std::endl;
    }

    std::cout << "\n \n";

    suggestions = j.getSuggestions("ba");

    for (auto c : suggestions) {
        std::cout << c << std::endl;
    }

    std::cout << "\n \n";

    suggestions = j.getSuggestions("bal");

    for (auto c : suggestions) {
        std::cout << c << std::endl;
    }

    std::cout << "\n \n";
}