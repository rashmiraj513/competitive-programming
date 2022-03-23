#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        if(n==2) return true;
        sort(arr.begin(), arr.end());
        int cd=arr[1]-arr[0];
        for(int i=2;i<n;i++) {
            if(arr[i]-arr[i-1]!=cd) return false;
            else continue;
        }
        return true;
    }
};