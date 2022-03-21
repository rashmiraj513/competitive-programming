#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k, ans=0; cin>>n>>k; int arr[n];
        for(int i=0;i<n;i++) {
            int temp; cin>>temp; arr[i]=temp;
            if(temp>k) ans++;
        }
        cout<<ans<<endl;
    }
	return 0;
}