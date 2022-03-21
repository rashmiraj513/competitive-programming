#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int s, a, b, c; cin>>s>>a>>b>>c;
        double sharePrice=s+(s*c)/100.0;
        if(sharePrice>=a && sharePrice<=b) cout<<"Yes\n";
        else cout<<"No\n";
	}
	return 0;
}