#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str; int n=str.size(), d=0;
        for(int i=0; i<n-1; i++) {
            int a=0;
            for(int j=0; j<n;j++) {
                if(str[i]==str[j]) a++;
            }
            if(d<a) d=a;
        }
        if(d==n-d) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}