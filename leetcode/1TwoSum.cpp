#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> dp;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]+nums[j]==target) {
                    dp.push_back(i);
                    dp.push_back(j);
                }
            }
        }
        return dp;
    }
};