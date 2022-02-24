#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; string str; cin>>str;
        for(int i=0;i<n-1;i+=2) swap(str[i], str[i+1]);
        for(int i=0;i<n;i++) {
            int temp=str[i]-97;
            str[i]=(122-temp);
        }
        cout<<str<<endl;
    }
    return 0;
}