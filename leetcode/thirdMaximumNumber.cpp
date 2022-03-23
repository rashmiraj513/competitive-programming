#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
    public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size(), res=INT_MAX, count=0;
        sort(nums.begin(), nums.end());
        if(n==2) return nums[n-1];
        else {
            for(int i=n-1;i>=0;i--) {
                if(count==3) break;
                else {
                    if(res!=nums[i]) { res=min(res, nums[i]); count++; }
                }
            }
        }
        return count==3?res:nums[n-1];
    }
};