#include "Autocomplete.h"

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    return trie.search(partialWord);
}

void Autocomplete::insert(std::string word) {
    trie.insert(word);
}