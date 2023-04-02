#include "Finder.h"
#include <unordered_map>

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
        vector<int> result;

        for (int i = 0; i < s1.length(); i++) {
            if (s2[0] == s1[i]) {

                if (s2.length() >= 2 && i < s1.length() - 1) {
                    int current = i + 1;

                    for (int j = 1; j < s2.length(); j++) {
                        if (s2[j] != s1[current]) {
                            break;
                        }

                        current++;

                        if (j == s2.length() - 1) {
                            result.push_back(i);
                        }
                    }
                } else {
                    result.push_back(i);
                }
            }
        }

        return result;
    }