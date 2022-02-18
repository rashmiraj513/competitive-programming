#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; 
	    string task, target; cin>>task>>target;
	    int ones=0, zeros=0, a=0, b=0;
	    for(int i=0;i<n;i++) {
	        if(task[i]=='0') zeros++;
	        else ones++;
	        if(target[i]=='0') a++;
	        else b++;
	    }
	    if(zeros==a && ones==b) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}