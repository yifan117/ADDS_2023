#include "PrefixMatcher.h"

void PrefixMatcher::insert(std::string address, int routerNum) {
    trie.insertRouter(address, routerNum);
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    return trie.searchRouter(networkAddress);
}