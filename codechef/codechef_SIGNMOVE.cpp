#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        n%2==0?cout<<n/2<<endl:cout<<n*(-1)/2-1<<endl;
    }
	return 0;
}