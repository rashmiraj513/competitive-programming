#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    if(n%2!=0) cout<<"BOB\n";
	    else cout<<"ALICE\n";
	}
	return 0;
}