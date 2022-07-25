#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid.size(); j++) {
                if(i == 0) res += grid[i][j];
                if(i == grid.size() - 1) res += grid[i][j];
                if(j == 0) res += grid[i][j];
                if(j == grid.size() - 1) res += grid[i][j];
                if(grid[i][j]) res += 2;
                if(j < grid.size() - 1) res += abs(grid[i][j] - grid[i][j + 1]);
                if(i < grid.size() - 1) res += abs(grid[i][j] - grid[i + 1][j]);
            }
        }
        return res;
    }
};