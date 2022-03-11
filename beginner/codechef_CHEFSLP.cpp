#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, l, k; cin>>n>>l>>k; cout<<min(l, n-l)*k<<endl;
	}
	return 0;
}