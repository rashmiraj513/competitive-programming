#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c; cin>>a>>b>>c;
        if(((a+b)/c)%2==0) cout<<"CHEF\n";
        else cout<<"COOK\n";
	}
	return 0;
}