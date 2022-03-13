#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int mx=-1;
        for(int i=0;i<n-k+1;i++) {
            int temp=0;
            for(int j=i;j<k+i;j++) temp+=arr[j];
            mx=max(mx, temp);
        }
        cout<<mx<<endl;
	}
	return 0;
}