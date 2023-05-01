#include "Node.h"

Node::Node() {
    this->data = 0;
    this->link = nullptr;
}

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}

Node* Node::get_link() {
    return this->link;
}

int Node::get_data() {
    return this->data;
}

void Node::set_link(Node* link) {
    this->link = link;
}

void Node::set_data(int data) {
    this->data = data;
}