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

            node->children[address[i]]->routerNum = routerNum;

            node->children[address[i]]->longest = address.length();

        }


        node = node->children[address[i]];

    }

}


int Trie::searchRouter(std::string prefix) {

    TrieNode* node = root;

    int res;

    int count = 0;

    if (prefix.length() == 1) {
        if (node->children.find(prefix[0]) != node->children.end()) {
            return node->children[prefix[0]]->routerNum;
        }
    }

    if (prefix.length() == 0) return -1;

    for (int i = 0; i < prefix.length(); i++) {

        count++;

        if (node->children.find(prefix[i]) == node->children.end()) break;


        res = node->routerNum;


        node = node->children[prefix[i]];


    }

    if (count != prefix.length() && count < node->longest) return -1;


    return res;

}

