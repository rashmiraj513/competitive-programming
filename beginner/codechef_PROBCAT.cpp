#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n;
        if(n>=1 && n<100) cout<<"Easy\n";
        else if(n>=100 && n<200) cout<<"Medium\n";
        else cout<<"Hard\n";
	}
	return 0;
}