#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n, res=0; string str; cin>>n>>str;
        for(int i=0;i<str.size();i++) { 
            if(str[i]=='1') res++; 
        }
        float temp=(120-n+res)*100/120;
        if(temp>=75) cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
}