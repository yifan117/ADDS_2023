#include <iostream>
#include "Heap.tpp"

int main() {
    Heap<int> heap;

    heap.insert(1);
    heap.insert(2);
    heap.insert(11);
    heap.insert(4);
    heap.insert(3);
    heap.insert(100);

    std::cout << "Minimum element: " << heap.getMin() << std::endl;

    heap.remove(1);

    std::cout << "Minimum element after removal: " << heap.getMin() << std::endl;

    heap.remove(100);

    return 0;
}
