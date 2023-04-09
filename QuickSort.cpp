#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    quickSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int first_partition = partition(list, low, high);
        quickSort(list, low, first_partition - 1); // quicksorts bottom partition
        quickSort(list, first_partition + 1, high); // quicksorts top partition
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[high]; // sets pivot to last index every time

    if (high - low + 1 >= 3) { // checks if length of partition is greater than or equal to 3, and if so, sets pivot to third index
        int third = list[low + 2];
        list[high] = third;
        list[low + 2] = pivot;
        pivot = third; // setting pivot to third index
    }

    int left = low - 1;

    for (int j = low; j < high; j++) {
        if (list[j] < pivot) {
            left++;
            int temp = list[left];
            list[left] = list[j];
            list[j] = temp;
        }
    }

    int temp = list[left + 1];
    list[left + 1] = list[high];
    list[high] = temp;

    return left + 1;
}