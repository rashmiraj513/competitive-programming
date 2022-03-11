#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int a, b, x, y; cin>>a>>b>>x>>y;
	    (x*y>=a*b)?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}