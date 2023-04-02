#include "Finder.h"
#include <string>
#include <vector>

using namespace std;

int main() {
    Finder f1;

    string s1 = "asdasd";
    string s2 = "asd";

    vector<int> a = f1.findSubstrings(s1, s2);
    
    for (auto v : a) {
        cout << v << endl;
    }
}