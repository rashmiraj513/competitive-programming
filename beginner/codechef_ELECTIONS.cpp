#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, c; cin>>a>>b>>c;
        if(a>50) cout<<"A\n";
        else if(b>50) cout<<"B\n";
        else if(c>50) cout<<"C\n";
        else cout<<"NOTA\n";
	}
	return 0;
}