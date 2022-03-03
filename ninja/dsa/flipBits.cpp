#include<iostream>
using namespace std;
int flipBits(int *arr, int n) {
    int count=0, mx=0, sum=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==1) { count++; arr[i]=-1; }
        else arr[i]=1;
    }
    for(int i=0;i<n;i++) {
        sum+=arr[i]; mx=max(mx, sum);
        if(sum<0) sum=0;
    }
    return (count+mx);
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<flipBits(arr, n)<<endl;
    }
    return 0;
}