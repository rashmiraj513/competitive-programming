#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long a, b, n; cin>>a>>b>>n;
        long c=a, d=b;
        if(n%2==0) cout<<(max(a, b)/min(a, b))<<endl;
        else cout<<(max(a*2, b)/min(a*2, b))<<endl;
    }
    return 0;
}