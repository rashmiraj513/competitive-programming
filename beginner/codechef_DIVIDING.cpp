#include<iostream>
using namespace std;
int main() {
	int t, sum=0, total=0; cin>>t;
	for(int i=1; i<=t; i++) {
        int temp; cin>>temp; sum+=temp;
        total+=i;
	}
    sum==total?cout<<"YES\n":cout<<"NO\n";
	return 0;
}