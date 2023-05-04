#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    private:
        Node* head;
        int size;
    public:
        LinkedList(); // default constructor
        LinkedList(int* array, int len); // constructor that creates a list from a C-array of length len
        ~LinkedList(); // destructor that deletes all nodes from the list

        int get_size();
        void set_size(int size);
        /* 
            inserts new node containing the number newNum    into the pos position
            pos of 1 or less places new node at the front of the list
            pos greater than size adds node to end of the list
        */
        void insertPosition(int pos, int newNum); 


        // removes node at pos from list and deletes it, if successfully deletes node, return true, if pos out of bounds, return false
        bool deletePosition(int pos);

        // returns pos Node's data. if pos is out of bounds, return std::numeric_limits < iunt >::max()
        int get(int pos);

        // searches list for first occurrence of target in list and returns index of where target is, if doesnt exist, return -1
        int search(int target);

        // print every node's data separated by spaces, encapsulated in []
        void printList();

        // // traverse the list until reaching the node at specified position, & return that node's address
        // Node* traverse(unsigned int index);
        
        // // create a new node with an int of data at the index'th position of the list; inserting out of bounds does nothing
        // void insertAtPosition(int item, unsigned int index);

        // deletes the front node from the list
        void deleteFromFront();
};

#endif