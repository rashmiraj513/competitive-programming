#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int arr[10], first=0, second=0;
        for(int i=0;i<10;i++) { cin>>arr[i]; i%2!=0?second+=arr[i]:first+=arr[i]; }
        if(first>second) cout<<1<<endl;
        else if(first<second) cout<<2<<endl;
        else cout<<0<<endl;
	}
	return 0;
}