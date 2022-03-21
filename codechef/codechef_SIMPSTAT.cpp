#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        double sum=0, total=n-2*k;
        for(int i=k;i<n-k;i++) sum+=arr[i];
        cout<<setprecision(6)<<fixed<<(sum/total)<<endl;
    }
    return 0;
}