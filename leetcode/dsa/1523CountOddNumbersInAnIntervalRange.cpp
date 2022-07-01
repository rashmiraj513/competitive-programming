#include <iostream>
using namespace std;
class Solution {
    public:
    int countOdds(int low, int high) {
        int res = 0;
        if(low %2 == 0) low += 1;
        while(low <= high) {
            res++; low += 2;
        }
        return res;
    }
};