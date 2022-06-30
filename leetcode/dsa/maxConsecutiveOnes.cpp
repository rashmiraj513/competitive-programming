#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i, res = 0; vector<int> temp;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]) res++;
            else { temp.push_back(res); res=0; }
        }
        if(i == nums.size()) temp.push_back(res);
        return *max_element(temp.begin(), temp.end());
    }
};