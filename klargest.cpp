#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> pq;

    // push values into priority queue
    for (int i = 0; i < values.size(); i++) {
        pq.push(values[i]);
    }

    // pops off k - 1 largest elements
    for (int i = 0; i < k - 1; i++) {
        if (!pq.empty()) pq.pop();
    }

    // returns the top as the top is the largest
    return pq.top();
}
