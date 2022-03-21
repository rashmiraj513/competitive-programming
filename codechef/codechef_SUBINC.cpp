#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; long long arr[n]; int res[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0;i<n;i++) res[i]=1;
        long long total=1;
        for(int i=n-2;i>=0;i--) {
            if(arr[i]<=arr[i+1]) res[i]+=res[i+1];
            total+=res[i];
        }
        cout<<total<<endl;
    }
    return 0;
}