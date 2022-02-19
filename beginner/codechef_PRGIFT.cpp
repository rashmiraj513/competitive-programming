#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int total=0;
        for(int i=0; i<n; i++) {
            if(arr[i]%2==0) total++;
        }
        if(k==0 && total==n) cout<<"NO\n";
        else if(total>=k) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}