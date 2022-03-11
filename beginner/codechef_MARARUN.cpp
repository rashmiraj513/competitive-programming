#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int D, d, a, b, c; cin>>D>>d>>a>>b>>c;
        int dis=D*d;
        if(dis<10) cout<<"0\n";
        else if(dis>=10 && dis<21) cout<<a<<endl;
        else if(dis>=10 && dis<=21) cout<<b<<endl;
        else if(dis>=21 && dis<42) cout<<b<<endl;
        else cout<<c<<endl;
    }
	return 0;
}