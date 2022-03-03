#include<iostream>
#include<vector>
using namespace std;
long long kadane(vector<int> &arr, int n, int k) {
    long long mx=-1e15, sum=0;
    for(int i=0;i<n*k;i++) {
        sum+=arr[i%n]; mx=max(mx, sum);
        if(sum<0) sum=0;
    }
    return mx;
}
long long maxSubSumKConcat(vector<int> &arr, int n, int k) {
    long long maxSum;
    if(k==1) return kadane(arr, n, k);
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    if(sum<0) maxSum=kadane(arr, n, 2);
    else {
        maxSum=kadane(arr, n, 2); maxSum+=(long long)(k-2)*(long long)sum;
    }
    return maxSum;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<maxSubSumKConcat(arr, n, k)<<endl;
    }
    return 0;
}