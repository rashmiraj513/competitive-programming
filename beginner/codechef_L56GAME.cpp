#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n, temp=0; cin>>n;
		for(int i=0;i<n;i++) {
            int flag; cin>>flag;
            if(flag%2!=0) temp++;
		}
		(n==1 && temp==1)?cout<<1<<endl:cout<<(1+temp%2)<<endl;
	}
	return 0;
}