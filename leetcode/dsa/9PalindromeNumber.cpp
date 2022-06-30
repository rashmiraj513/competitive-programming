#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev = 0, num = x;
        if(x < 0) return false;
        while(x != 0) {
            int temp = x % 10;
            rev = rev * 10 + temp;
            x /= 10;
        }
        if(num == rev) return true;
        return false;
    }
};