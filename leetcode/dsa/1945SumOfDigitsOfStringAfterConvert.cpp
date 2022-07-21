#include <iostream>
using namespace std;
class Solution {
public:
    string sumOfDigits(string str) {
        int sum = 0;
        for(auto ch : str) {
            sum += (ch - '0');
        }
        return to_string(sum);
    }
    int getLucky(string s, int k) {
        string res = "";
        for(auto ch : s) {
            res += to_string(ch - 'a' + 1);
        }
        for(int i = 0; i < k; i++) {
            res = sumOfDigits(res);
        }
        return stoi(res);
    }
};