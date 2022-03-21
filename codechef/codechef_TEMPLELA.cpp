#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        int n; cin>>n; int arr[n]; string res="no";
        for(int i=0; i<n; i++) cin>>arr[i];
        if(n%2==0 || arr[0]!=1 || arr[n-1]!=1) res="no";
        else {
            int mid=n/2, count=0;
            for(int i=0;i<n-1;i++) {
                int j=i+1; int diff=arr[j]-arr[i];
                if(diff!=1 && j<=mid) break;
                else if(diff!=-1 && i>=mid) break;
                else count++;
            }
            if(count==n-1) res="yes";
        }
        cout<<res<<endl;
    }
	return 0;
}