#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumSum(int num) {
        string ans = to_string(num);
        sort(ans.begin(), ans.end());
        return((ans[0] - '0' + ans[1] - '0') * 10 + ans[2] - '0' + ans[3] -'0');
    }
};