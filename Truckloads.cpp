#include "Truckloads.h"

/*
half1, half2 -> take max of either half, increment count for each iteration
if num to divide is odd, pass in num + 1 / 2, else just pass in num/2. continue recursing until num is equal to loadSize

         14
        /  \
       7    7
      / \  / \
      3 4  3 4
       / \  / \
      2   2 2  2
*/

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1; // counts when numCrates has divided far enough to be able to fit on a truck

    // recurse using these --> if it's odd, you do one numCrates/2 and (numCrates+1)/2
    // if it's even, you'll do numCrates/2 and numCrates/2, however, doing odd/even will return the same as even/even due to int rounding
    // so recursing on one odd and one even will ensure that the requirement is being met at all iterations.
    int left = numCrates / 2; 
    int right = (numCrates + 1) / 2;

    return (numTrucks(left, loadSize) + numTrucks(right, loadSize));
}