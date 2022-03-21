#include <iostream>
using namespace std;
typedef unsigned long long int ll;
int main() {
    int t; cin>>t;
    while(t--) {
        int d0, d1; ll k, ans; cin>>k>>d0>>d1;
        int d=d0+d1; ans=d; k-=2;
        ll sum=(2*d%10)+(4*d%10)+(8*d%10)+(6*d%10);
        if(k>0) {
            ans+=d%10; k--;
            if(k>0) {
                ans+=sum*(k/4); k%=4;
            }
            int z=2;
            while(k--) {
                ans+=z*d%10; z*=2;
            }
        }
        ans%3==0?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}