#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    int heightChecker(vector<int>& heights) {
        vector<int> dp=heights; int count=0;
        sort(heights.begin(), heights.end());
        for(int i=0;i<heights.size();i++) if(heights[i]!=dp[i]) count++;
        return count;
    }
};