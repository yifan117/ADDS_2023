#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
    this->size = 0;
}

LinkedList::LinkedList(int* array, int len) {
    this->size = len;

    if (len == 0) {
        head = nullptr;
        return;
    }

    head = new Node();
    head->set_data(array[0]);
    Node* curr = head;

    for (int i = 1; i < len; i++) {
        Node* next = new Node();
        next->set_data(array[i]);
        curr->set_link(next);
        curr = next;
    }
}

LinkedList::~LinkedList() {
    while (head) {
        deleteFromFront();
    }

    // std::cout << "destructed" << std::endl;
}

int LinkedList::get_size() {
    return this->size;
}

void LinkedList::set_size(int size) {
    this->size = size;
}

void LinkedList::insertPosition(int pos, int newNum) {

    if (pos > this->size) {
        Node* temp = head;
        while (temp->get_link()) {
            temp = temp->get_link();
        }

        Node* inserted = new Node();
        inserted->set_data(newNum);
        temp->set_link(inserted);

    } else if (pos <= 1) {
        Node* temp = new Node();
        temp->set_data(newNum);
        temp->set_link(head);
        head = temp;
    } else {
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->get_link();
        }

        Node* inserted = new Node();
        inserted->set_data(newNum);
        inserted->set_link(temp->get_link());
        temp->set_link(inserted);
    }

    this->size++;
}

// 1 2 3 4 5

bool LinkedList::deletePosition(int pos) {
    if (pos > this->size || pos <= 0) return false;

    if (pos == 1) {
        head = head->get_link();
        this->size--;
        return true;
    }

    Node* curr = head;
    Node* prev = nullptr;

    while (pos > 1) {
        prev = curr;
        curr = curr->get_link();
        pos--;
    }

    if (!curr->get_link()) {
        prev->set_link(nullptr);
    } else {
        prev->set_link(curr->get_link());
    }

    this->size--;
    return true;
}

int LinkedList::get(int pos) {
    if (pos == 1) return head->get_data();
    if (pos <= 0 || pos > this->size) return std::numeric_limits < int >::max();

    Node* curr = head;

    while (pos > 1) {
        curr = curr->get_link();
        pos--;
    }

    return curr->get_data();
}

// 1 2 3 4 5

int LinkedList::search(int target) {
    Node* curr = head;
    int index = 1;

    while (curr) {
        if (curr->get_data() == target) {
            return index;
        }

        curr = curr->get_link();
        index++;
    }

    return -1;
}

void LinkedList::printList() {

    if (this->get_size() == 0) {
        std::cout << "empty" << std::endl;
        return;
    }

    Node* currNode = head; 

    std::cout << "[";

    while (currNode->get_link()) {
        std::cout << currNode->get_data() << " "; 
        currNode = currNode->get_link(); 
    }

    std::cout << currNode->get_data();
    std::cout << "]" << std::endl;
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->get_link();
    delete temp;
}