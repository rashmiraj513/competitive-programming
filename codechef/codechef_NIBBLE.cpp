#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    (n%4==0)?cout<<"Good\n":cout<<"Not Good\n";
	}
	return 0;
}