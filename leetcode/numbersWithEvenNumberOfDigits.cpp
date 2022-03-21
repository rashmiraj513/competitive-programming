#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int findNumbers(vector<int>& nums) {
        int count=0, even=0;
        for(int i=0;i<nums.size();i++) {
            int n=nums[i];
            while(n!=0) { count++; n/=10; }
            if(count%2==0) even+=1;
            count=0;
        }
        return even;
    }
};