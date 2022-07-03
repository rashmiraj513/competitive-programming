#include <iostream>
using namespace std;
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(mx < nums[i]) mx = nums[i];
            if(mn > nums[i]) mn = nums[i];
        }
        return max(0, mx - k - mn - k);
    }
};