#include<iostream>
using namespace std;
long long maxSubarraySum(int arr[], int n) {
    long long sum=0, mx=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i]; mx=max(mx, sum);
        if(sum<0) sum=0;
    }
    return mx;
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<maxSubarraySum(arr, n)<<endl;
    return 0;
}