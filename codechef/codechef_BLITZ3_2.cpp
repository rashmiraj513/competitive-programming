#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, a, b; cin>>n>>a>>b;
        int c=2*(180+n), d=a+b;
        cout<<c-d<<endl;
    }
	return 0;
}