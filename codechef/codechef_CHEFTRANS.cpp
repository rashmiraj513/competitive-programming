#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int x, y, z; cin>>x>>y>>z;
        if(x+y==z) cout<<"Equal\n";
        else if(x+y<z) cout<<"PlaneBus\n";
        else cout<<"Train\n";
    }
	return 0;
}