#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; string str; cin>>n>>str;
        int a=0, b=0; bool flag = false;
        for(int i=0;i<n;i++) {
            if(str[i]=='H') a++;
            if(str[i]=='T') b++;
            if(a==b || a-b==1) continue;
            else {
                flag=true; break;
            }
        }
        if(flag || a!=b) cout<<"Invalid"<<endl;
        else cout<<"Valid"<<endl;
    }
    return 0;
}