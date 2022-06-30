#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        bool flag = true;
        if(n == 1 || n == 7) return true;
        int sum = n;
        while(n >= 10) {
            int res = 0;
            while(sum > 0) {
                int r = sum % 10;
                res += (r * r);
                sum /= 10;
            }
            n = res; sum = n;
        }
        flag = (n == 1 || n == 7) ? true : false;
        return flag;
    }
};