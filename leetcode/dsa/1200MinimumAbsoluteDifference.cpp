#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int> > res;
        sort(arr.begin(), arr.end());
        int mn = INT_MAX;
        for(int i = 0; i < arr.size() - 1; i++) mn = min(arr[i + 1] - arr[i], mn);
        for(int i = 0; i < arr.size() - 1; i++) {
            if(arr[i + 1] - arr[i] == mn) res.push_back({arr[i], arr[i + 1]});
        }
        return res;
    }
};