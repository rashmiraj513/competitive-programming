#include<iostream>
using namespace std;
void palindromeSubString(string &s1, string &s2) {
    int flag=0;
    for(int i=0; i<s1.length(); i++) {
        for(int j=0; j<s2.length(); j++) {
            if(s1[i]==s2[j]) {
                flag=1; break;
            }
        }
        if(flag==1) break;
    }
    flag?cout<<"Yes\n":cout<<"No\n";
}
int main() {
    int t; cin>>t;
    while(t--) {
        string a, b; cin>>a>>b;
        palindromeSubString(a, b);
    }
    return 0;
}