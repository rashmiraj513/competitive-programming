#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<*min_element(arr, arr+n)<<endl;
	}
	return 0;
}