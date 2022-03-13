#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, even=0; cin>>n;
        for(int i=0;i<n;i++) {
            int temp; cin>>temp;
            if(temp%2==0) even++;
        }
        even?cout<<"NO\n":cout<<"YES\n";
	}
	return 0;
}