#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    string str, rev; cin>>str;
	    rev=str; int n=str.size();
	    for(int i=0;i<n/2;i++) rev[n-i-1]=str[i];
	    if(rev>str) cout<<rev<<endl;
	    else {
	        int mid=(n-1)/2;
	        for(int i=mid;i>=0;i--) {
	            if(rev[i]!='9') {
	                rev[i]=rev[i]+1;
	                break;
	            } else rev[i]='0';
	        }
	        for(int i=n/2;i<n;i++) rev[i]=rev[n-i-1];
	        if(rev[0]=='0') {
	            rev[0]='1'; rev+='1';
	        }
	        cout<<rev<<endl;
	    }
	}
	return 0;
}