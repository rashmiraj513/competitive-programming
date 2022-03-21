#include<iostream>
using namespace std;
int main() {
    int n, m, k, count=0; cin>>n>>m>>k;
    while(n--) {
        int arr[k+1], sum=0;
        for(int i=0;i<=k;i++) cin>>arr[i];
        for(int i=0;i<k;i++) sum+=arr[i];
        if(sum>=m && arr[k]<=10) count++;
    }
    cout<<count<<endl;
	return 0;
}