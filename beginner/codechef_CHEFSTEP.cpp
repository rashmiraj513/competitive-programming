#include<iostream>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n, k; cin>>n>>k; int arr[n];
        loop(i, n) cin>>arr[i];
        loop(i, n) {
            if(arr[i]%k==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}