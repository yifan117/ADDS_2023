#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <vector>
#include <unordered_map>

struct TrieNode {
    std::unordered_map<char, TrieNode*> children; // children, map is used for O(1) access
    std::vector<std::string> dictionary; // dictionary of words available at each node
    int routerNum;
    int longest = 0;
    int longestRoute = -1;
};

class Trie {
    private:
        TrieNode* root;

    public:
        Trie();
        void insert(std::string word); // inserts word at each node's dictionary
        std::vector<std::string> search(std::string prefix); // searches each node for prefix, and returns the dictionary of that node

        void insertRouter(std::string address, int routerNum);
        int searchRouter(std::string prefix);
};

#endif