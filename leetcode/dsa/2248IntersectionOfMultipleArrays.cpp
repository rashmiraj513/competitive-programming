#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> res;
        map<int, int> temp;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums[i].size(); j++) {
                temp[nums[i][j]]++;
            }
        }
        for(auto &it : temp) {
            if(it.second == nums.size()) res.push_back(it.first);
        }
        return res;
    }
};