#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res = 0;
        for(auto it : logs) {
            if(it == "../") {
                if(res == 0) continue;
                res--;
            }
            else if(it == "./") continue;
            else res++;
        }
        if(res < 0) return 0;
        return res;
    }
};