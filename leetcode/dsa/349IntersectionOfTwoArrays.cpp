#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> temp;
        vector<int> res;
        for(auto i : nums1) temp[i]++;
        for(auto c : nums2) {
            if(temp[c] > 0) {
                res.push_back(c);
                temp[c] = 0;
            }
        }
        return res;
    }
};