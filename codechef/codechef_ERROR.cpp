#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		string str; cin>>str; int n=str.size(), t=0;
		for(int i=0;i<n;i++) {
			if((str[i]=='0' && str[i+1]=='1' && str[i+2]=='0') || (str[i]=='1' && str[i+1]=='0' && str[i+2]=='1')) { 
				cout<<"Good\n"; t++; break;
			}
		}
		if(!t) cout<<"Bad\n";
	}
	return 0;
}