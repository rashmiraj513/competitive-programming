#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, x; cin>>n>>x;
        cout<<(n/3)*x*2+(n%3)*x<<endl;
    }
	return 0;
}