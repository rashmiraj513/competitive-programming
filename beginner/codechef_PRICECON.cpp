#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int totalPrice=0, newPrice=0;
        for(int i=0; i<n; i++) {
            totalPrice+=arr[i];
            if(arr[i]>k) newPrice+=k;
            else newPrice+=arr[i];
        }
        cout<<totalPrice-newPrice<<endl;
    }
    return 0;
}