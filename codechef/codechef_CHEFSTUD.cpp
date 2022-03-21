#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str; int res=0;
        int n=str.size();
        for(int i=0;i<n;i++) {
            if(str[i]=='<' && str[i+1]=='>') res++;
        }
        cout<<res<<endl;
    }
    return 0;
}