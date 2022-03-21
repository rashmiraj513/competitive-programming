#include<iostream>
#include<algorithm>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n, k; cin>>n>>k; int arr[n];
        loop(i, n) cin>>arr[i];
        sort(arr, arr+n);
        cout<<arr[(n+k)/2]<<endl;
    }
    return 0;
}