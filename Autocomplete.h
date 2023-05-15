#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "Trie.h"

#include <string>
#include <vector>

class Autocomplete {
    private:
        Trie trie;
        
    public:
        std::vector<std::string> getSuggestions(std::string partialWord); // returns known words that start with partialWord (the prefix)
        void insert(std::string word); // adds word to the known words
};

#endif