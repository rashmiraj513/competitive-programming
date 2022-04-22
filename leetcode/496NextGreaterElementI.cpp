#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res; int n=nums1.size(), m=nums2.size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                bool flag=true;
                if(nums1[i]==nums2[j]) {
                    for(int k=j+1;k<m;k++) {
                        if(nums2[k]>nums2[j]) {
                            res.push_back(nums2[k]);
                            flag=false; break;
                        }
                    }
                }
                if(flag==true) res.push_back(-1);
            }
        }
        return res;
    }
};