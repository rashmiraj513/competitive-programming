#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void kthSmallestLargest(int arr[], int n, int k) {
    sort(arr, arr+n); 
    int z=n-1, mn=INT_MAX, count=0, flag=0;
    while(z>=0) {
        if(arr[z]<mn) {
            mn=arr[z]; count++;
        }
        if(count==k) {
            flag=1; cout<<arr[z]<<" "; break;
        }
        z--;
    }
    if(flag==0) cout<<-1<<" ";
    count=0, mn=INT_MIN, flag=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>mn) { mn=arr[i]; count++; }
        if(count==k) { flag=1; cout<<arr[i]<<endl; break; }
    }
    if(flag==0) cout<<-1<<endl;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        kthSmallestLargest(arr, n, k);
    }
    return 0;
}