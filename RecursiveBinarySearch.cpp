#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    int middle = list.size() / 2;

    if (list.size() == 0) return false;

    if (list[middle] == target) return true;

    if (target < list[middle]) {
        std::vector<int> left(list.begin(), list.begin() + middle);
        return search(left, target);
    }
        
    std::vector<int> right(list.begin() + middle + 1, list.end());
    return search(right, target);
}