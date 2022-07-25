#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        int add = 0, minus = 0;
        for(auto it : operations) {
            if(it == "X++" || it == "++X") add++;
            else minus++;
        }
        return (res + add - minus);
    }
};