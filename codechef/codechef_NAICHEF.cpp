#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, a, b; cin>>n>>a>>b; int arr[n+1], count[2]={0};
        for(int i=1;i<n+1;i++) {
            cin>>arr[i]; 
            if(arr[i]==a) count[0]++;
            if(arr[i]==b) count[1]++;
        }
        double res=(count[0]*count[1]*1.0)/(n*n*1.0);
        cout<<fixed<<setprecision(6)<<res<<endl;
    }
	return 0;
}