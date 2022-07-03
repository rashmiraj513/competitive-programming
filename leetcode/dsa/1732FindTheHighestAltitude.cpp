#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, mx = INT_MIN;
        for(int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            mx = max(sum, mx);
        }
        return mx > 0 ? mx : 0;
    }
};