#include <iostream>
using namespace std;
class Solution {
public:
    int sumBase(int n, int k) {
        string res = "";
        while(n != 0) {
            res.push_back(n % k + '0');
            n /= k;
        }
        int ans = 0;
        for(char i : res) {
            ans += (i - '0');
        }
        return ans;
    }
};