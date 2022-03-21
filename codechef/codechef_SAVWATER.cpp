#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int h, x, y, c; cin>>h>>x>>y>>c;
        (x+y/2)*h>c?cout<<"NO\n":cout<<"YES\n";
	}
	return 0;
}