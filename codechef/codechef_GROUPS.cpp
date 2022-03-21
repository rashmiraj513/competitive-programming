#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		string str; cin>>str; int n=str.size();
		int group=0, i=0;
		while(i<n) {
			if(str[i]=='1') {
				while(i<n && str[i]=='1') i++;
				group++;
			} else i++;
		}
		cout<<group<<endl;
	}
	return 0;
}