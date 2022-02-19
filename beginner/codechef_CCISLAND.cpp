#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int x, y, xr, yr, d; cin>>x>>y>>xr>>yr>>d;
	    int food=x/xr, water=y/yr;
	    if(min(food, water)>=d) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}