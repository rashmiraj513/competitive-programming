#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int a, b, c, d, bag=1; cin>>a>>b>>c>>d;
		if(a+b+c<=d) cout<<bag<<endl;
		else {
			bag++; 
			if(a+b<=d) cout<<bag<<endl;
			else { bag++; cout<<bag<<endl; }
		}
	}
	return 0;
}