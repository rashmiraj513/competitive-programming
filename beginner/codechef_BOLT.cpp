#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        double a, b, c, v; cin>>a>>b>>c>>v;
        double d=100/(a*b*c*v); d=round(d*100.0)/100.0;
        9.58>d?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}