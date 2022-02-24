#include<bits/stdc++.h>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        loop(i, n) cin>>arr[i];
        long long int count=0;
        loop(i, n) {
            int rem=arr[i]%k;
            if(rem!=0) {
                if(arr[i]<k) count+=(k-arr[i]);
                else count+=min(rem, k-rem);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}