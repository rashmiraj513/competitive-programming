#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    string reverseWords(string s) {
        // First method is just apply reverse method of algorithm header file.
        // reverse(s.begin(), s.end());
        // Second method is to use two pointer method.
        int left=0, right=s.size()-1;
        while(left<right) swap(s.at(left++), s.at(right--));
        for(auto& ch:s) cout<<ch<<" ";
    }
};