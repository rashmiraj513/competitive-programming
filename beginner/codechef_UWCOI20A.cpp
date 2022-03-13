#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, mx=-1; cin>>n;
        for(int i=0;i<n;i++) {
            int temp; cin>>temp; mx=max(temp, mx);
        }
        cout<<mx<<endl;
	}
	return 0;
}