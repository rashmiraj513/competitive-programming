#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0, k = 0;
        for(int x : nums) sum += x;
        if(sum - nums[0] == 0) return 0;
        for(int i = 1; i < nums.size(); i++) {
            k += nums[i - 1];
            if(k == (sum - (k + nums[i]))) return i;
        }
        return -1;
    }
};