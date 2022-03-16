#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n; int arr[n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) cin>>arr[i][j];
		}
        int mx=0;
        for(int i=0;i<n;i++) {
            int sum1=0, sum2=0, s=i, e=0;
            while(s<n && e<n) {
                sum1+=arr[s][e]; sum2+=arr[e][s];
                e++; s++;
            }
            mx=max(mx, max(sum1,sum2));
        }
        cout<<mx<<endl;
	}
	return 0;
}