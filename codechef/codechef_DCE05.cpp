#include <iostream>
using namespace std;
void solve() {
    int n; cin>>n;
    if(n==1) cout<<1<<endl;
    else {
        int p=2;
        while(p*2<=n) p*=2;
        cout<<p<<endl;
    }
    return;
}
int main() {
    int t; cin>>t;
    while(t--) solve();
	return 0;
}