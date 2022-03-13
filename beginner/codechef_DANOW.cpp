#include<iostream>
using namespace std;
int main() {
	int n, q; cin>>n>>q; long long int first[n], second[n];
    for(int i=0;i<n;i++) cin>>first[i];
    for(int i=0;i<n;i++) cin>>second[i];
    while(q--) {
        int l, r; cin>>l>>r; long long int sum=0;
        for(int i=l-1;i<r;i++) sum=sum+first[i]*second[i];
        cout<<sum<<endl;
    }
	return 0;
}