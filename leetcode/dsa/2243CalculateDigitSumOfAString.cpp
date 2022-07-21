#include <iostream>
using namespace std;
class Solution {
public:
    string sumOfDigits(string str) {
        int sum = 0;
        for(auto ch : str) sum += (ch - '0');
        return to_string(sum);
    }
    string digitSum(string s, int k) {
        while(s.length() > k) {
            string temp;
            for(int i = 0; i < s.length(); i += k) temp += sumOfDigits(s.substr(i, k));
            temp = s;
        }
        return s;
    }
};