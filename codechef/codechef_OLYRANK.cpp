#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c, d, e, f; cin>>a>>b>>c>>d>>e>>f;
        a+b+c>d+e+f?cout<<1<<endl:cout<<2<<endl;
	}
	return 0;
}