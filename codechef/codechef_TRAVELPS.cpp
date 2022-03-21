#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, a, b; cin>>n>>a>>b; string str; cin>>str;
        int zeros=0, ones=0;
        for(int i=0;i<n;i++) str[i]=='1'?ones++:zeros++;
        cout<<ones*b+zeros*a<<endl;
	}
	return 0;
}