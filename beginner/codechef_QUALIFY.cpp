#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int x, a, b; cin>>x>>a>>b;
	    (x<=(a+b*2))?cout<<"Qualify\n":cout<<"NotQualify\n";
	}
	return 0;
}