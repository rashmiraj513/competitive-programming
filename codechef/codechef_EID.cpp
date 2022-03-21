#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr, arr+n);
        int res=arr[1]-arr[0];
        for(int i=2;i<n;i++) res=min(res, arr[i]-arr[i-1]);
        cout<<res<<endl;
	}
	return 0;
}