#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> temp;
        for(auto i : nums) temp[i]++;
        int res = 0;
        for(auto x : temp) {
            if(x.second > 1) {
                res = res + (x.second * (x.second - 1) / 2);
            }
        }
        return res;
    }
};