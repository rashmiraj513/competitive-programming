#include<iostream>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n], min=109, max=0;
        loop(i, n) {
            cin>>arr[i]; 
            if(arr[i]>max) max=arr[i];
            if(arr[i]<min) min=arr[i];
        }
        loop(i, n) if(arr[i]==max || arr[i]==min) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}