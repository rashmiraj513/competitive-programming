#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    sum%2==0?cout<<"NO\n":cout<<"YES\n";
	}
	return 0;
}