#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int low=0, high=n-1, flag=1;
        if(arr[low]!=1) flag=0;
        else {
            while(low<high) {
                if(arr[low]!=arr[high]) {
                    flag=0; break;
                }
                if(arr[low]!=arr[low+1] && arr[low]+1!=arr[low+1]) {
                    flag=0; break;
                }
                low++; high--;
            }
            if(arr[low]!=7) flag=0;
        }
        flag?cout<<"yes\n":cout<<"no\n";
    }
    return 0;
}