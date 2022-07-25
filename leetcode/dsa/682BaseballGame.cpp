#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int sum(vector<string> res) {
        int ans = 0;
        for(auto x : res) ans += stoi(x);
        return ans;
    }
    int calPoints(vector<string>& ops) {
        vector<string> res;
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "C") res.pop_back();
            else if(ops[i] == "D") {
                int temp = stoi(res[res.size() - 1]);
                res.push_back(to_string(2 * temp));
            }
            else if(ops[i] == "+") {
                res.push_back(to_string(stoi(res[res.size() - 1]) + stoi(res[res.size() - 2])));
            }
            else res.push_back(ops[i]);
        }
        return sum(res);
    }
};