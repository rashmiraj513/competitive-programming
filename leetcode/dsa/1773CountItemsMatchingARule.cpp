#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0, index;
        if(ruleKey == "type") index = 0;
        else if(ruleKey == "color") index = 1;
        else index = 2;
        for(int i = 0; i < items.size(); i++) {
            if(items[i][index] == ruleValue) res++;
        }
        return res;
    }
};