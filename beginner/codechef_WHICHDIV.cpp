#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, res; cin>>n;
        if(n>=2000) res=1;
        else if(n>=1600 && n<2000) res=2;
        else res=3;
        cout<<res<<endl;
	}
	return 0;
}