#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int res=0;
        for(int i=0;i<n;i++) {
            long sum=0, product=1;
            for(int j=i;j<n;j++) {
                sum+=arr[j]; product*=arr[j];
                if(sum==product) res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}