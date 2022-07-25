#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int i = 0, count[101] = {0}, n = nums.size();
        for(int i = 0; i < n; i++) count[nums[i]]++;
        for(int i = 1; i < 101; i++) count[i] += count[i - 1];
        for(auto it : nums) {
            if(it == 0) res.push_back(0);
            else res.push_back(count[it - 1]);
        }
        return res;
    }
};