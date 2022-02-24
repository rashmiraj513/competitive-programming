#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; int temp=5, fact=0;
	    while((n/temp)>0) {
	        fact+=n/temp; temp*=5;
	    }
	    cout<<fact<<endl;
	}
	return 0;
}