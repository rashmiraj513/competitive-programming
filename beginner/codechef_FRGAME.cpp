#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c, d; cin>>a>>b>>c>>d;
        if(a<b) a+=c;
        else b+=c;
        if(a<b) a+=d;
        else b+=d;
        a<b?cout<<"S\n":cout<<"N\n";
    }
	return 0;
}