#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        while(n--) {
            int a, b, c; cin>>a>>b>>c;
            int res=b/2;
            a==c?cout<<res<<endl:cout<<b-res<<endl;
        }
    }
    return 0;
}