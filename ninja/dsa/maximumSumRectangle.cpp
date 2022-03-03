#include<iostream>
#include<vector>
using namespace std;
int kadane(int *arr, int n) {
    int mx=0, sum=0;
    for(int i=0; i<n; i++) {
        sum+=arr[i]; mx=max(mx, sum);
        if(sum<0) sum=0;
    }
    if(mx>0) return mx;
    int ans=arr[0];
    for(int i=0;i<n; i++) {
        if(ans<arr[i]) ans=arr[i];
    }
    return ans;
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m) {
	int res=-1e7; int temp[n]={0};
    for(int left=0;left<m;left++) {
        for(int i=0;i<n;i++) temp[i]=0;
        for(int right=left;right<m;right++) {
            for(int j=0;j<n;j++) temp[j]+=arr[j][right];
            res=max(res, kadane(temp, n));
        }
    }
    return res;
}
int main() {
    int t; cin>>t;
    while (t--) {
        int n, m; cin>>n>>m;
        vector<vector<int>> arr(n, vector<int> (m, 0));
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) cin>>arr[i][j];
        }
        cout<<maxSumRectangle(arr, n, m)<<endl;
    }
    return 0;
}