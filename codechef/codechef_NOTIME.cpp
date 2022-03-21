#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	int n, h, x; cin>>n>>h>>x; int arr[n], res;
    for(int i=0;i<n;i++) { 
        cin>>arr[i]; if(arr[i]+x>=h) { res=1; break; }
    }
    res?cout<<"YES\n":cout<<"NO\n";
	return 0;
}