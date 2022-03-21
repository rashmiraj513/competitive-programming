#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, flag=0; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int gcd=arr[0];
        for(int i=0;i<n;i++) gcd=__gcd(gcd, arr[i]);
        for(int i=0;i<n;i++) cout<<arr[i]/gcd<<" ";
        cout<<endl;
    }
}