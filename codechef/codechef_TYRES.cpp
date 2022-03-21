#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    n%4==2?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}