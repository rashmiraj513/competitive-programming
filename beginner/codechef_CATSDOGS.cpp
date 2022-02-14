#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long c, d, l; cin>>c>>d>>l;
        if(l>=d*4 && l<=(c+d)*4 && (c-(l-d*4)/4)<=2*d) {
            if(l%4==0) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        } else cout<<"no\n";
    }
    return 0;
}