#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c; cin>>a>>b>>c;
        if(a<b && a<c) cout<<"NOTHING\n";
        else if(b<=a) cout<<"PIZZA\n";
        else cout<<"BURGER\n";
	}
	return 0;
}