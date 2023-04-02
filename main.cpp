#include "Finder.h"
#include <string>
#include <vector>

using namespace std;

int main() {
    Finder f1;

    string s1 = "23426872";
    string s2 = "26";

    vector<int> a = f1.findSubstrings(s1, s2);
    
    for (auto v : a) {
        cout << v << endl;
    }
}