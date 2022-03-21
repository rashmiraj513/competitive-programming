#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, ans=1; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=1;i<n;i++) {
            if(arr[i-1]>=arr[i]) ans++;
            else arr[i]=arr[i-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}