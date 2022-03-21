#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; long arr[n+1]; long result[n+1]; arr[0]=0; 
        int res=0;
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=1;i<=n;i++) result[i]=arr[i]-arr[i-1];
        for(int i=0;i<n;i++) {
            int temp; cin>>temp;
            if(result[i+1]>=temp) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}