#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int res = 0; 
        for(int i = 1; i < nums.size() - 1; i++) {
            if(nums[i - 1] > nums[i] && nums[i + 1] > nums[i] || nums[i - 1] < nums[i] && nums[i + 1] < nums[i]) res++;
        }
        return res;
    }
};