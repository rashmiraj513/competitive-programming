#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, res; cin>>a>>b;
        if(a+b<3) res=1;
        else if(a+b>=3 && a+b<=10) res=2;
        else if(a+b>=11 && a+b<=60) res=3;
        else res=4;
        cout<<res<<endl;
    }
	return 0;
}