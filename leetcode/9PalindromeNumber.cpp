#include<iostream>
using namespace std;
class Solution {
    public:
    bool isPalindrome(int x) {
        long long int reverse=0, fact=x;
        if(x<0) return false;
        while(x!=0) {
            reverse=reverse*10+x%10;
            x/=10;
        }
        if(reverse==fact) return true;
        return false;
    }
};