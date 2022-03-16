#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, a, b, c, res=0; cin>>n>>a>>b>>c;
        while(a!=0 && b!=0) { a--; b--; res++; }
        while(b!=0 && c!=0) { b--; c--; res++;}
        res>=n?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}