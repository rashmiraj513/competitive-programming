#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int a, b, c; cin>>a>>b>>c;
	    int mn=min(a, min(b, c));
	    if(b==mn) cout<<"Bob\n";
	    else if(c==mn) cout<<"Alice\n";
	    else cout<<"Draw\n";
	}
	return 0;
}