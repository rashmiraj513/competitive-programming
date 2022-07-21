#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int mx = 0;
        for(auto it : boxTypes) {
            if(it[0] > truckSize) return mx + truckSize * it[1];
            mx += it[0] * it[1];
            truckSize -= it[0];
        }
        return mx;
    }
};