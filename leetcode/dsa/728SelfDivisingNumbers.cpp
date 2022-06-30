#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool solve(int num) {
        string ans = to_string(num); int temp = 0;
        if(ans.find('0') != string::npos) return false;
        for(int i = 0; i < ans.length(); i++) {
            if(num % (ans[i] - '0') != 0) break;
            else temp++;
        }
        if(temp == ans.length()) return true;
        return false;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++) {
            if(solve(i)) res.push_back(i);
        }
        return res;
    }
};