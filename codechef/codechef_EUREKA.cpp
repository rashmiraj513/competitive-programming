#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; cout<<round(pow(0.143*n, n))<<endl;
	}
	return 0;
}