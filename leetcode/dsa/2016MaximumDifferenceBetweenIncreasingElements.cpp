#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = 0, mn = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            mn = min(mn, nums[i]);
            res = max(res, nums[i] - mn);
        }
        if(res == 0) return -1;
        return res;
    }
};