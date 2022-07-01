#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        return reverse(reverse(num)) == num;
    }
};