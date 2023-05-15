#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "Trie.h"

#include <string>

class PrefixMatcher {
    private:
        Trie trie;

    public:
        void insert(std::string address, int routerNumber); // add a router address
        int selectRouter(std::string networkAddress); // return the router with the longest matching prefix
// We've made this a string for ease of implementation
// if you'd like to work with binary numbers in your implementation
// feel free but for testing you need to provide an interface that takes a string
};

#endif