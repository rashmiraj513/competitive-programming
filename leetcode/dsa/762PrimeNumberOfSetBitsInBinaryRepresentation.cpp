#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int countSetBits(int num) {
        int count = 0;
        while(num > 0) {
            if(num % 2 == 1) count++;
            num /= 2;
        }
        return count;
    }
    bool isPrime(int num) {
        if(num <= 1) return false;
        for(int i = 2; i <= sqrt(num); i++) {
            if(num % i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int i = left; i <= right; i++) {
            if(isPrime(countSetBits(i))) res++;
        }
        return res;
    }
};