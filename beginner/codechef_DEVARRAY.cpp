#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, q; cin>>n>>q; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr, arr+n);
    while(q--) {
        int t; cin>>t;
        if(t>=arr[0] && t<=arr[n-1]) cout<<"Yes\n";
        else cout<<"No\n";
    }
	return 0;
}