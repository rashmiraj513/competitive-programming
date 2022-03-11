#include<iostream>
using namespace std;
int search(int* arr, int n, int key) {
    for(int i=0;i<n;i++) {
        if(arr[i]==key) return i;
    }
    return -1;
}
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int t; cin>>t;
    while(t--) {
        int x; cin>>x;
        cout<<search(arr, n, x)<<endl;
    }
    return 0;
}