#include <iostream>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        string res = to_string(num);
        for(int i = 0; i < res.length(); i++) {
            if(res[i] != '9') {
                res[i] = '9'; break;
            }
        }
        return stoi(res);
    }
};