#include<iostream>
#include<map>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n<=8) {
            if(n==1) cout<<"4LB\n";
            else if(n==2) cout<<"5MB\n";
            else if(n==3) cout<<"6UB\n";
            else if(n==4) cout<<"1LB\n";
            else if(n==5) cout<<"2MB\n";
            else if(n==6) cout<<"3UB\n";
            else if(n==7) cout<<"8SU\n";
            else if(n==8) cout<<"7SL\n";
        } else {
            int p=n%8;
            if(p==1) cout<<n+3<<"LB\n";
            else if(p==2) cout<<n+3<<"MB\n";
            else if(p==3) cout<<n+3<<"UB\n";
            else if(p==4) cout<<n-3<<"LB\n";
            else if(p==5) cout<<n-3<<"MB\n";
            else if(p==6) cout<<n-3<<"UB\n";
            else if(p==7) cout<<n+1<<"SU\n";
            else if(p==0) cout<<n-1<<"SL\n";
        }
    }
    return 0;
}