#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int n=str.size(), count=0;
        for(int i=0;i<n;i++) {
            if(str[i]=='4') count++;
        }
        cout<<count<<endl;
    }
    return 0;
}