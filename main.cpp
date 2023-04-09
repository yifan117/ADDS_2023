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

    Sort* sorter = new QuickSort();
    // Sort* sorter = new BubbleSort();
    RecursiveBinarySearch* searcher = new RecursiveBinarySearch();

    list = sorter->sort(list);

    std::cout << std::boolalpha << searcher->search(list, 1) << " ";

    for (int val : list) {
        std::cout << val << " ";
    }

}