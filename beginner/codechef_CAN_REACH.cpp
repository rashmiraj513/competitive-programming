#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int x, y, k; cin>>x>>y>>k;
        if((abs(x)%k==0) && (abs(y)%k==0)) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}