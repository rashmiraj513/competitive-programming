#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int b, c; cin>>b>>c;
		cout<<c/__gcd(b, c)<<endl;
	}
	return 0;
}