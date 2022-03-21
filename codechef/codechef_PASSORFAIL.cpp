#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n, x, p; cin>>n>>x>>p;
	    p>(x*3-(n-x))?cout<<"FAIL\n":cout<<"PASS\n";
	}
	return 0;
}