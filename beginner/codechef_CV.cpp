#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, res=0; cin>>n; string str; cin>>str;
        for(int i=0; i<n-1; i++) {
            if((str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u') && (str[i+1]=='a' || str[i+1]=='e' || str[i+1]=='i' || str[i+1]=='o' || str[i+1]=='u')) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}