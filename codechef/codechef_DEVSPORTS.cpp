#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int z, y, a, b, c; cin>>z>>y>>a>>b>>c;
        z-y>=a+b+c?cout<<"YES\n":cout<<"NO\n";
    }
	return 0;
}