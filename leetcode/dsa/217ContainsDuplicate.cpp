#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> temp;
        for(int i = 0; i < n; i++) {
            temp[nums[i]]++;
        }
        for(auto x:temp) {
            if(x.second > 1) return true;
        }
        return false;
    }
};