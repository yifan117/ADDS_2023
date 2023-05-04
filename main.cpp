#include <iostream>
#include "LinkedList.h"
#include "BigNumCalc.h"

using namespace std;

int main() {
    // // build and initialize a linked list object named ll
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

    std::cout << ll.search(5) << std::endl;

    // BigNumCalc num1;
    // BigNumCalc num2;

    // num1.buildBigNum("10009");
    // num2.buildBigNum("10009");

    // BigNumCalc sum;

    // sum.add(num1.get_num(), num2.get_num());

    // for (auto it : sum.get_num()) {
    //     std::cout << it;
    // }

    // std::cout << "\n";

    // num1.buildBigNum("10019");
    // num2.buildBigNum("10009");

    // BigNumCalc diff;

    // diff.sub(num1.get_num(), num2.get_num());

    // for (auto it : diff.get_num()) {
    //     std::cout << it;
    // }

    return 0;
}