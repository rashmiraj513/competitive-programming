#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		string str; cin>>str; int n=str.size();
		for(int i=0;i<n;i++) {
			if(str[i]=='p' && str[i+1]=='a' && str[i+2]=='r' && str[i+3]=='t' && str[i+4]=='y') {
				str[i+2]='w'; str[i+3]='r'; str[i+4]='i';
			}
		}
		cout<<str<<endl;
	}
	return 0;
}