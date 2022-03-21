#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long int a, b; cin>>a>>b;
        if(a%2==0 && b%2==0 && abs(a-b)==2) cout<<"YES\n";
        else if(a%2!=0 && b%2!=0 && abs(a-b)==2) cout<<"YES\n";
        else if(a%2!=0 && b%2==0 && b>a && abs(a-b)==1) cout<<"YES\n";
        else if(a%2==0 && b%2!=0 && a>b && abs(a-b)==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}