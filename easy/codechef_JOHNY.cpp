#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; long long arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int k; cin>>k;
        int len=arr[k-1], loc;
        sort(arr, arr+n);
        for(int i=0;i<n;i++) {
            if(arr[i]==len) {
                loc=i+1; break;
            }
        }
        cout<<loc<<endl;
    }
	return 0;
}