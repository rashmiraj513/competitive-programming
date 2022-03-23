#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size(), i;
        for(i=0;i<n-1;i++) arr[i]=*max_element(arr.begin()+i+1, arr.end());
        arr[i]=-1;
        return arr;
    }
};