#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c, d, e; cin>>a>>b>>c>>d>>e;
		if(b-a>=c*e && b-a<=d*e) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}