#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int x, y; cin>>x>>y;
	    (x+y)%2==0?cout<<"Janmansh\n":cout<<"Jay\n";
	}
	return 0;
}