#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
class Solution {
    public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int sum=0, n=salary.size();
        for(int i=1;i<n-1;i++) sum+=salary[i];
        return (sum/1.0/(n-2));
    }
};