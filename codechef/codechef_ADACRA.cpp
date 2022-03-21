#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str; int count=0;
        if(str[0]=='U') {
            for(int i=0;i<str.length()-1;i++) {
                if(str[i]!=str[i+1]) {
                    if(str[i]=='U') count+=1;
                }
            }
        } else {
            for(int i=0;i<str.length()-1;i++) {
                if(str[i]!=str[i+1]) {
                    if(str[i]=='D') count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}