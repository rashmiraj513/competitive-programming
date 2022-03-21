#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; int arr[n], temp=0;
	    for(int i=0;i<n;i++) {
	        int flag; cin>>flag; arr[i]=flag;
	        if(flag>=10 && flag<=60) temp++;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}