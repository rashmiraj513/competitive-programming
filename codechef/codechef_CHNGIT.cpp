#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n, a, res=0; cin>>n; int arr[101]={0};
	    for(int i=0;i<n;i++) {
	        cin>>a; arr[a]++;
	    }
	    for(int i=1;i<=100;i++) res=max(res, arr[i]);
	    cout<<n-res<<endl;
	}
	return 0;
}