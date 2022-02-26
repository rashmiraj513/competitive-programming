#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int temp, count=0;
        for(int i=0; i<n; i++) {
            if(arr[i]>=k) {
                int surplus=(arr[i]-k); arr[i+1]+=surplus;
            } else {
                temp=i+1; count=1; break;
            }
        }
        count==1?cout<<"NO"<<" "<<temp<<endl:cout<<"YES\n";
    }
    return 0;
}