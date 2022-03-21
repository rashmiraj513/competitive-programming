#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int x, y, a, b, k; cin>>x>>y>>a>>b>>k;
        int p=x+a*k, d=y+b*k;
        if(p==d) cout<<"SAME PRICE\n";
        else if(p>d) cout<<"DIESEL\n";
        else cout<<"PETROL\n";
	}
	return 0;
}