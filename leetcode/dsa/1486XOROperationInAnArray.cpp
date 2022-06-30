#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> res;
        for(int i = 0; i < n; i++) {
            int temp = start + 2 * i;
            res.push_back(temp);
        }
        int ans = 0;
        for(auto i : res) ans = ans ^ i;
        return ans;
    }
};