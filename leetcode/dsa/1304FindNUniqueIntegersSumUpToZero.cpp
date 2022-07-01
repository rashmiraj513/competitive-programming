#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int i = 1;
        while(i <= n / 2) {
            res.push_back(i);
            res.push_back(-i);
            i++;
        }
        if(n % 2 == 1) res.push_back(0);
        return res;
    }
};