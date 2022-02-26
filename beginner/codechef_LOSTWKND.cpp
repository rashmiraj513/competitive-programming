#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c, d, e, p; cin>>a>>b>>c>>d>>e>>p;
        int temp=(a+b+c+d+e)*p, total=120;
        temp<=total?cout<<"No\n":cout<<"Yes\n";
    }
    return 0;
}