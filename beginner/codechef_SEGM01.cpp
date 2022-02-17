#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str; int n=str.size();
        int count=0, flag=0;
        for(int i=0; i<n; i++) {
            if(str[i]=='1') {
                if(flag==1) continue;
                else {
                    flag=1; count++;
                }
            } else flag=0;
        }
        if(count==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}