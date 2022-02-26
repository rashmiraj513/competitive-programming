#include<iostream>
using namespace std;
int fibbonacciNumber(int n) {
    const int MOD=1e9+7;
    int arr[n+2]; arr[0]=0; arr[1]=1;
    for(int i=2;i<=n;i++) {
        arr[i]=(arr[i-1]+arr[i-2])%MOD;
    }
    return arr[n];
}
int main() {
    int t; cin>>t;
    while (t--) {
        long long n; cin>>n;
        cout<<fibbonacciNumber(n)<<endl;
    }
    return 0;
}