#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long n, k, res; cin>>n>>k; long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) {
            if(k>=arr[i]) {
                k-=arr[i]; res=1;
            } else res=0;
            cout<<res;
        }
        cout<<endl;
    }
}