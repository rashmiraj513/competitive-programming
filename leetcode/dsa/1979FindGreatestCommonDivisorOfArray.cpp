#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int gcd(int a, int b) {
        if(b != 0) return gcd(b, a % b);
        else return a;
    }
    int findGCD(vector<int>& nums) {
        // One line to compute the output of the problem
        // return __gcd(*min_element(nums.begin(), nums.end()), *max_element(nums.begin(), nums.end()));
        int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > mx) mx = nums[i];
            if(nums[i] < mn) mn = nums[i];
        }
        return gcd(mn, mx);
    }
};