#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int data;
        Node* link;
    public:
        Node();
        Node(int, Node*);
        Node* get_link();
        int get_data();
        void set_link(Node* link);
        void set_data(int data);
};

#endif