#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str; int n=str.size(), res=1;
        for(int i=0;i<n;i+=2) {
            if(((str[i]=='A') && (str[i+1]=='A')) || (str[i]=='B') && (str[i+1]=='B')) {
                res=0; break;
            }
        }
        res?cout<<"yes\n":cout<<"no\n";
    }
    return 0;
}