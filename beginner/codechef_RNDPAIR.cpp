#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n, sum=0; cin>>n; double arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr, arr+n);
        double m, c=0; m=arr[n-1]+arr[n-2];
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                sum=arr[i]+arr[j];
                if(sum==m) c++;
            }
        }
        cout<<fixed<<setprecision(8)<<2*c/(n*(n-1))<<endl;
	}
	return 0;
}