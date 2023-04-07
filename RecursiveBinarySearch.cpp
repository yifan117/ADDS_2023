#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int item) {
    int low = 0;
    int high = list.size()-1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (list[mid] == item) {
            return true;
        } else if (list[mid] < item) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return false;
}