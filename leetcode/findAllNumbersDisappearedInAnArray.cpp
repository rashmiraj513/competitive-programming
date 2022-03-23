#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n=nums.size(), i=0;
        while(i<n) {
            if(nums[i]==i+1 || nums[i]==-1) i++;
            else if(nums[i]==nums[nums[i]-1]) nums[i++]=-1;
            else swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++) {
            if(nums[i]==i+1) continue;
            else res.push_back(i+1);
        }
        return res;
    }
};