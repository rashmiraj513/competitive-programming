#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string res=((10-n)>=3)?"Yes":"No";
        cout<<res<<endl;
	}
	return 0;
}