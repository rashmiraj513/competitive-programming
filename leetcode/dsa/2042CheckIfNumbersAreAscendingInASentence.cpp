#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool areNumbersAscending(string s) {
        s += " ";
        int n = s.size();
        vector<string> arr;
        string temp;
        for(int i = 0; i < n; i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                temp += s[i];
            } else if(temp != "") {
                arr.push_back(temp); temp = "";
            }
        }
        for(int i = 1; i < arr.size(); i++) {
            if(stoi(arr[i]) <= stoi(arr[i - 1])) return false;
        }
        return true;
    }
};