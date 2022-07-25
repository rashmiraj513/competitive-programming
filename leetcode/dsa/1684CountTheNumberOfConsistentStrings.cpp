#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0}, res = 0;
        for(auto ch : allowed) arr[ch - 'a'] = 1;
        for(auto s : words) {
            int i = 0;
            for(; i < s.length(); i++) {
                if(arr[s[i] - 'a'] < 1) break;
            }
            if(i == s.length()) res++;
        }
        return res;
    }
};