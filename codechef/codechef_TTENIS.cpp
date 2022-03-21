#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string str; cin>>str;
        int n=str.size(), a=0, b=0;
        for(int i=0; i<n;i++) {
            if(str[i]==1) a++; 
            else b++;
        }
        if(a>b) cout<<"WIN\n";
        else cout<<"LOSE\n";
    }
    return 0;
}