#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int x, y, sum; cin>>x>>y; float ans, z;
        sum=x+y; z=6-sum;
        if(z>0) { ans=z/6; cout<<ans<<endl; }
        else cout<<0<<endl;
	}
	return 0;
}