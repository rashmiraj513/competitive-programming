#include<iostream>
#define loop for(int i=0;i<n;i++)
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, k, sum=0, count=1; cin>>n>>k; int arr[n];
        loop cin>>arr[i];
        loop {
            if(arr[i]>k) { count=-1; break; } 
            sum+=arr[i]; 
            if(sum>k) { sum=arr[i]; count++; }
        }
        cout<<count<<endl;
	}
	return 0;
}