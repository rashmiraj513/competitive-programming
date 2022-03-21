#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, res=0; cin>>n; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        long mn=*min_element(arr, arr+n);
        cout<<mn*(n-1)<<endl;
    }
    return 0;
}