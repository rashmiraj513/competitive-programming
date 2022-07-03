#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int> > res; vector<int> flag;
        unordered_map<int, int> temp;
        for(auto &it : nums1) temp[it]++;
        for(auto &it : nums2) temp[it] = 0;
        for(auto &it : temp) {
            if(it.second > 0) flag.push_back(it.first);
        }
        res.push_back(flag);
        temp.clear(); flag.clear();
        for(auto &it : nums2) temp[it]++;
        for(auto &it : nums1) temp[it] = 0;
        for(auto &it : temp) {
            if(it.second > 0) flag.push_back(it.first);
        }
        res.push_back(flag);
        return res;
    }
};