#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string greatestLetter(string s) {
        string res = "";
        unordered_map<char, int> temp;
        for(auto &it : s) temp[it]++;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.length(); i++) {
            char l = tolower(s[i]);
            char u = toupper(s[i]);
            if(temp[l] && temp[u]) res = u;
        }
        return res;
    }
};