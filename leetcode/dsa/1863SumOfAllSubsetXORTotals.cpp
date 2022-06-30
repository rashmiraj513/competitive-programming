#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        for(auto x : nums) {
            res |= x;
        }
        return res << (nums.size() - 1);
    }
};