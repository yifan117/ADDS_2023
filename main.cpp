#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::vector<int> list;
    
    int num;
    while (std::cin >> num) {
        list.push_back(num);
    }

    // Sort* sorter = new QuickSort();
    Sort* sorter = new BubbleSort();
    list = sorter->sort(list);

    for (int val : list) {
        std::cout << val << std::endl;
    }
}