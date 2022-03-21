#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int arr[n]; long long int res=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n-1;i++) res+=(abs(arr[i+1]-arr[i])-1);
        cout<<res<<endl;
	}
	return 0;
}