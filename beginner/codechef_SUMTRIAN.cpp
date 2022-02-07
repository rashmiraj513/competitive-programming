#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n+1][n+1];
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i;j++) cin>>arr[i][j];
        }
        for(int i=n-1;i>=0;i--) {
            for(int j=1; j<=i; j++) arr[i][j]=arr[i][j]+max(arr[i+1][j], arr[i+1][j+1]);
        }
        cout<<arr[1][1]<<endl;
    }
    return 0;
}