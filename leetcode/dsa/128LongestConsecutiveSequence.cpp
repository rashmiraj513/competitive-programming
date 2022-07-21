#include <iostream>
#include <set>
#include <vector>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        set<int> s;
        for(int x : nums) s.insert(x);
        int count = 1, mx = INT_MIN;
        for(int i : s) {
            if(s.find(i + 1) != s.end()) count++;
            else mx = max(mx, count);
            count = 1;
        }
        mx = max(mx, count);
        return mx;
    }
};