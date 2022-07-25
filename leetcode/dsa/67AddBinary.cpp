#include <iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length(), n = b.length(), carry = 0, i = 0;
        string res = "";
        while(i < m || i < n || carry) {
            int sum = 0;
            i < m ? sum += (a[m - i - 1] - '0') : sum += 0;
            i < n ? sum += (b[n - i - 1] - '0') : sum += 0;
            sum += carry;
            carry = sum > 1;
            res = char(sum % 2 + '0') + res;
            i++;
        }
        return res;
    }
};