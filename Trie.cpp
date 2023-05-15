#include <unordered_map>
#include <string>
#include <vector>

#include "Trie.h"

Trie::Trie() {
    root = new TrieNode();
    root->routerNum = -1; // means no router is assigned
}

void Trie::insert(std::string word) {
    TrieNode* node = root;

    for (int i = 0; i < word.length(); i++) { // iterates over input word
        if (node->children.find(word[i]) == node->children.end()) node->children[word[i]] = new TrieNode(); // checks count of character in node's map, if 0, adds new node

        node = node->children[word[i]]; // iterates to next node
        node->dictionary.push_back(word); // adds word available to each node's dictionary
    }
}

std::vector<std::string> Trie::search(std::string prefix) {
    TrieNode* node = root;
    for (int i = 0; i < prefix.length(); i++) { // iterates over prefix to search
        if (node->children.find(prefix[i]) == node->children.end()) { // if the node's map doesn't have the prefix, the loop stops
            return {};
        }

        node = node->children[prefix[i]]; // moves to next node to check
    }

    return node->dictionary; // returns the node with dictionary that has the prefix
}

void Trie::insertRouter(std::string address, int routerNum) {

    TrieNode* node = root;


    for (int i = 0; i < address.length(); i++) {

        if (node->children.find(address[i]) == node->children.end()) {

            node->children[address[i]] = new TrieNode();

        }


        node = node->children[address[i]];

    }


    node->routerNum = routerNum;

}


int Trie::searchRouter(std::string prefix) {

    TrieNode* node = root;

    int res = -1;


    for (int i = 0; i < prefix.length(); i++) {

        if (node->children.find(prefix[i]) == node->children.end()) break;


        node = node->children[prefix[i]];


        if (node->routerNum != -1 && node->routerNum > 0) res = node->routerNum;

    }


    return res;

}
