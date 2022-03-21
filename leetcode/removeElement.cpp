#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
    public:
    int removeElement(vector<int>& nums, int val) {
        int count=0, n=nums.size();
        for(auto& it:nums) {
            if(it==val) { count++; it=INT_MAX; }
        }
        sort(nums.begin(), nums.end());
        return (n-count);
    }
};