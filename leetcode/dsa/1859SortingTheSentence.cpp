#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    static bool cmp(pair<string, int> a, pair<string, int> b) {
        return (a.second < b.second);
    }
    string sortSentence(string s) {
        s += " ";
        vector<pair<string, int> > mp;
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                int index = temp[temp.length() - 1] - '0';
                temp.pop_back();
                mp.push_back({temp, index});
                temp = "";
            } else temp += s[i];
        }
        s.clear();
        sort(mp.begin(), mp.end(), cmp);
        for(auto it : mp) {
            s += it.first;
            s += " ";
        }
        s.pop_back();
        return s;
    }
};