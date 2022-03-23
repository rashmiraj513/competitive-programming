#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    void moveZeros(vector<int>& nums) {
        int nonZero=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]) { swap(nums[i], nums[nonZero++]);}
        }
        for(auto& it:nums) cout<<it<<" ";
    }
};