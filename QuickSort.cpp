#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size()-1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int p = partition(list, low, high);
        quickSort(list, low, p-1);
        quickSort(list, p+1, high);
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivotIndex = low + (high-low)/2;
    int pivotValue = list[pivotIndex];
    std::swap(list[pivotIndex], list[high]);
    int storeIndex = low;
    for (int i = low; i < high; i++) {
        if (list[i] < pivotValue) {
            std::swap(list[i], list[storeIndex]);
            storeIndex++;
        }
    }
    std::swap(list[storeIndex], list[high]);
    return storeIndex;
}