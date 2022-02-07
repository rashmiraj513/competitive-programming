#include <iostream>
using namespace std;
int main() {
	int k, n, res=-1; cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++) {
	    if(arr[i]==k) {
	        res=1;
	        break;
	    }
	}
	cout<<res<<endl;
	return 0;
}