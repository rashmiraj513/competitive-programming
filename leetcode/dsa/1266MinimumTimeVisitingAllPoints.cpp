#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        int n = points.size();
        for(int i = 0; i < n - 1; i++) {
            res += max(abs(points[i][0] - points[i+1][0]), abs(points[i][1] - points[i+1][1]));
        }
        return res;
    }
};