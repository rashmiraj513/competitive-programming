#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c, d, e, f; cin>>a>>b>>c>>d>>e>>f;
        if(min(a, b)==min(c, d) && max(a, b)==max(c, d)) cout<<1<<endl;
        else if(min(a, b)==min(e, f) && max(a, b)==max(e, f)) cout<<2<<endl;
        else cout<<0<<endl;
	}
	return 0;
}