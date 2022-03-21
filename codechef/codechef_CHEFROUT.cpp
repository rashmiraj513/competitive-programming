#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int flag=0, c=0;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='S') {
                if(str[i+1]=='E' || str[i+1]=='C') { flag=1; break; }
            } else if(str[i]=='E' && str[i+1]=='C') { flag=1; break; }
        }
        flag?cout<<"no\n":cout<<"yes\n";
    }
    return 0;
}