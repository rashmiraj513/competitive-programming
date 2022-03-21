#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n; int arr[n], sum=0, m=0;
        for (int i=0;i<n;i++) {
            cin>>arr[i]; sum+=arr[i];
            if(arr[i]==5) m=1;
        }
        int avg=sum/n, x=0;
        sort(arr, arr+n);
        if(avg>=4 && arr[0]>2 && m==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}