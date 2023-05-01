#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    // build and initialize a linked list object named ll
    LinkedList ll;

    ll.insertPosition(0, 1);
    ll.insertPosition(0, 2);
    ll.insertPosition(0, 3);
    ll.insertPosition(0, 4);
    ll.insertPosition(0, 5);
    ll.insertPosition(0, 6);
    ll.insertPosition(0, 7);

    ll.printList();

    ll.insertPosition(111, 99);

    ll.printList();

    ll.deletePosition(1);

    ll.printList();

    std::cout << ll.get(100) << std::endl;

    std::cout << ll.search(111) << std::endl;

    return 0;
}