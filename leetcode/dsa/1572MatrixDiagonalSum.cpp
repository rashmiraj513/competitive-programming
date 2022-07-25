#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), res = 0;
        for(int i = 0; i < n; i++) {
            res += mat[i][i];
            res += mat[i][n - i - 1];
        }
        if(n % 2 == 1) {
            int temp = n / 2;
            res -= mat[temp][temp];
        }
        return res;
    }
};