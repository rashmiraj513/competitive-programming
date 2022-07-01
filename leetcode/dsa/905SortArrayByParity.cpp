#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size(), readPtr, writePtr;
        for(readPtr = 0, writePtr = 0; readPtr < n; readPtr++) {
            if(nums[readPtr] & 1) continue;
            if(readPtr != writePtr) swap(nums[readPtr], nums[writePtr]);
            writePtr++;
        }
        return nums;    
    }
};