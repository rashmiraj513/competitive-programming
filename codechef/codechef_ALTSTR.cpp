#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; string str; cin>>n>>str; int zeros=0, ones=0, val=0;
        for(int i=0;i<n;i++) str[i]=='1'?ones++:zeros++;
        zeros<ones?val=zeros*2+(zeros!=ones):val=ones*2+(zeros!=ones);
        cout<<val<<endl;
    }
	return 0;
}