#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n, m; cin>>n>>m;
	    (n*m%2==0)?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}