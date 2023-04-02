#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    size_t found = 0; // holds index of last found (instead of starting at the start for every iteration, starts at last found)

    for (size_t i = 1; i <= s2.size(); i++) {
        found = s1.find(s2.substr(0, i), found); // pass in last found to begin search

        if (found != string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
            break; // if the substring is not found, breaks the loop so it doesnt waste time iterating over the whole string
        }
    }

    return result;
}