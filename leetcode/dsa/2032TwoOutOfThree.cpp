#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        map<int, int> temp;
        for(auto it : nums1) temp[it] = 1;
        for(auto it : nums2) {
            if(temp[it] == 1) {
                res.push_back(it); temp[it] = -1;
            } else if(temp[it] != -1) temp[it] = 2;
            else if(temp.find(it) == temp.end()) temp[it] = 2;
        }
        for(auto it : nums3) {
            if(temp[it] == 1 || temp[it] == 2) {
                res.push_back(it); temp[it] = 0;
            }
        }
        return res;
    }
};