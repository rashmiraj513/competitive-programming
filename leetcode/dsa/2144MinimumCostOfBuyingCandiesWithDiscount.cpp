#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int> ());
        int res = 0; 
        for(int i = 0; i < cost.size(); i++) {
            res += cost[i++];
            if(i < cost.size()) res += cost[i++];
        }
        return res;
    }
};