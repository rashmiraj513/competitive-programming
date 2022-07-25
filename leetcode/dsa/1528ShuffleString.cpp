#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int find(vector<int>& res, int val) {
        for(int i = 0; i < res.size(); i++) {
            if(res[i] == val) return i;
        }
        return -1;
    }
    string restoreString(string s, vector<int>& indices) {
        string res = "";
        for(int i = 0; i < s.length(); i++) {
            int temp = find(indices, i);
            res += s[temp];
        }
        return res;
    }
};