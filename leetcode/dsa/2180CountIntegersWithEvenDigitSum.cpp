#include <iostream>
using namespace std;
class Solution {
public:
    bool isSumOfDigitsEven(int x) {
        int sum = 0;
        while(x != 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum % 2 == 0 ? true : false;
    }
    int countEven(int num) {
        int res = 0;
        for(int i = 2; i <= num; i++) {
            if(isSumOfDigitsEven(i)) res++;
        }
        return res;
    }
};