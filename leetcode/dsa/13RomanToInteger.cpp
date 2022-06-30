#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int val = 0;
        for(int i = 0; i < s.length(); i++) {
            if(roman[s[i]] >= roman[s[i + 1]]) val += roman[s[i]];
            else val -= roman[s[i]];
        }
        return val;
    }
};