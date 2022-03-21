#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c; cin>>a>>b>>c;
        min(a, min(b, c))!=max(a, max(b, c))?cout<<1<<endl:cout<<0<<endl;
	}
	return 0;
}