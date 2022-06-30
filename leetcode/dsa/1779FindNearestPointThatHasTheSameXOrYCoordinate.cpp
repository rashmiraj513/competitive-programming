#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
    public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int i = 0, mn = INT_MAX, ans = -1, dis;
        for(auto &pt : points) {
            if(++i && (pt[0] == x || pt[1] == y) && (dis = abs(x - pt[0]) + abs(y - pt[1])) < mn) { 
                mn = dis; ans = i - 1; 
            }
        }
        return ans;
    }
};