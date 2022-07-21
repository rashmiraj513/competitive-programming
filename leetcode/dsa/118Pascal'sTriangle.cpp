#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res(numRows);
        for(int i = 0; i < numRows; i++) {
            if(i == 0) res[i] = {1};
            if(i == 1) res[i] = {1, 1};
            else {
                vector<int> ans(i + 1);
                ans[0] = 1, ans[i] = 1;
                for(int j = 1; j < i; j++) ans[j] = res[i - 1][j - 1] + res[i - 1][j];
                res[i] = ans;
            }
        }
        return res;
    }
};