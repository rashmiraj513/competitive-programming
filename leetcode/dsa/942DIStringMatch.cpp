#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int start = 0, end = s.length();
        for(int i = 0; i < s.length(); i++) {
            res.push_back((s[i] == 'I') ? start++ : end--);
        }
        res.push_back(start);
        return res;
    }
};