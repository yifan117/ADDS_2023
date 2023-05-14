#include <unordered_map>
#include <string>
#include <vector>

#include "Trie.h"

Trie::Trie() {
    root = new TrieNode();
}

void Trie::insert(std::string word) {
    TrieNode* node = root;

    for (int i = 0; i < word.length(); i++) { // iterates over input word
        if (node->children.count(word[i]) == 0) node->children[word[i]] = new TrieNode(); // checks count of character in node's map, if 0, adds new node

        node = node->children[word[i]]; // iterates to next node
        node->dictionary.push_back(word); // adds word available to each node's dictionary
    }
}

std::vector<std::string> Trie::search(std::string prefix) {
    TrieNode* node = root;
    for (int i = 0; i < prefix.length(); i++) { // iterates over prefix to search
        if (node->children.count(prefix[i]) == 0) { // if the node's map doesn't have the prefix, the loop stops
            return {};
        }

        node = node->children[prefix[i]]; // moves to next node to check
    }

    return node->dictionary; // returns the node with dictionary that has the prefix
}
