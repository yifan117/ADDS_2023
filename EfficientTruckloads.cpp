#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; // counts when numCrates has divided far enough to be able to fit on a truck

    // recurse using these --> if it's odd, you do one numCrates/2 and (numCrates+1)/2
    // if it's even, you'll do numCrates/2 and numCrates/2, however, doing odd/even will return the same as even/even due to int rounding
    // so recursing on one odd and one even will ensure that the requirement is being met at all iterations.
    int left = numCrates / 2; 
    int right = (numCrates + 1) / 2;

    if (memo.find(left) != memo.end()) {
        if (memo.find(right) != memo.end()) {
            return (memo[left] + memo[right]);
        } else {
            memo[right] = numTrucks(right, loadSize);
            return (memo[left] + memo[right]);
        }
    } else if (memo.find(right) != memo.end()) {
        memo[left] = numTrucks(left, loadSize);
        return (memo[left] + memo[right]);
    }

    if (memo.find(right) == memo.end()) memo[right] = numTrucks(right, loadSize);
    if (memo.find(left) == memo.end()) memo[left] = numTrucks(left, loadSize);
    return (memo[left] + memo[right]);
}