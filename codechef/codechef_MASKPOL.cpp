#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, k; cin>>n>>k; cout<<min(k, n-k)<<endl;
	}
	return 0;
}