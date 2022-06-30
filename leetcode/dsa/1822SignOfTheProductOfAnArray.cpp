#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int arraySign(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i <= nums.size() - 1; i++) {
            if(!nums[i]) return 0;
            else if(nums[i] < 0) res++;
        }
        return (res % 2 == 0) ? 1 : -1;
    }
};