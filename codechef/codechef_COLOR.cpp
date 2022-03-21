#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; string str; cin>>str;
        int reds=0, greens=0, blues=0;
        for(int i=0;i<n;i++) {
            if(str[i]=='R') reds++;
            else if(str[i]=='G') greens++;
            else blues++;
        }
        int mx=max(reds, max(greens, blues));
        cout<<n-mx<<endl;
    }
    return 0;
}