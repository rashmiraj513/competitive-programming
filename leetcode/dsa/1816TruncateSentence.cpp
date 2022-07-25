#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> str;
        s += " ";
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                str.push_back(temp); temp = "";
            } else temp += s[i];
        }
        int i = 0;
        s = "";
        while(i < k) {
            s += str[i++];
            s += " ";
        }
        s.pop_back();
        return s;
    }
};