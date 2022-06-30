#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int rows[m], cols[n];
        for(int i = 0; i < m; i++) rows[i] = 0;
        for(int i = 0; i < n; i++) cols[i] = 0;
        for(vector<int> index : indices) {
            rows[index[0]]++;
            cols[index[1]]++;
        }
        int oddRows = 0, oddCols = 0, evenRows = 0, evenCols = 0;
        for(int i = 0; i < m; i++) oddRows += 1 & rows[i];
        for(int j = 0; j < n; j++) oddCols += 1 & cols[j];
        return oddRows * (n - oddCols) + (m - oddRows) * oddCols;
    }
};