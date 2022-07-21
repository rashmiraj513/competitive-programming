#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> temp;
        int mx = 0;
        for(int i = 1; i <= n; i++) {
            int k = i, sum = 0;
            while(k) {
                sum += k % 10;
                k /= 10;
            }
            temp[sum]++;
            mx = max(temp[sum], mx);
        }
        int res = 0;
        for(auto i : temp) {
            if(i.second == mx) res++;
        }
        return res;
    }
};