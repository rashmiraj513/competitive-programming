#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size(), i=0, count=0;
        vector<int> dp;
        while(i<n) {
            if(s1[i]!=s2[i]) { count++; dp.push_back(i); }
            if(count>2) return false;
            i++;
        }
        if(count==0) return true;
        if(count==2 && s1[dp[0]]==s2[dp[1]] && s1[dp[1]]==s2[dp[0]]) return true;
        return false;
    }
};