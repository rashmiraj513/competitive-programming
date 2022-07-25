#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int mx = -1;
        for(int i = 0; i < candies.size(); i++) if(candies[i] > mx) mx = candies[i];
        for(auto x : candies) {
            if(x + extraCandies < mx) res.push_back(false);
            else res.push_back(true);
        }
        return res;
    }
};