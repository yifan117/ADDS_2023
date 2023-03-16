#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include <algorithm>
#include <iostream>
#include <vector>

/*
We have a pile of crates at our warehouse that we want to load onto trucks. 
Our plan is to divide the pile in half forming two smaller piles, then continuing dividing each of the small piles in half 
until we get piles that will fit on a truck. (Of course, when we divide an odd number of crates in "half", one of the resulting 
piles will have one more crate than the other.) Our problem is to determine how many trucks we will need to ship the crates.

Create a class Truckloads that contains a method numTrucks that is given numCrates (the number of crates at the warehouse) 
and loadSize (the maximum number of crates that will fit in a truck) and that returns the number of trucks required.
*/



class Truckloads {
    public:
        int numTrucks(int numCrates, int loadSize);
};

#endif