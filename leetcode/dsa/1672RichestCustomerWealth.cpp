#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int add(vector<int> temp) {
        int sum = 0;
        for(auto x : temp) sum += x;
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(vector<int> it : accounts) {
            res = max(res, add(it));
        }
        return res;
    }
};