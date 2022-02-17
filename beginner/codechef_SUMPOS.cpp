#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c; cin>>a>>b>>c;
        int mx=max(a, max(b, c));
        if(mx==a) {
            if(a==b+c) cout<<"YES\n";
            else cout<<"NO\n";
        } else if(mx==b) {
            if(b==a+c) cout<<"YES\n";
            else cout<<"NO\n";
        } else if(mx==c) {
            if(c==a+b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}