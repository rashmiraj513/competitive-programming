#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0, odd = 0;
        for(auto &it : position) {
            if(it % 2 == 0) even++;
            else odd++;
        }
        return min(even, odd);
    }
};