#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int arr[n], res=8+n;
        for(int i=0;i<n;i++) {
            int temp; cin>>temp;
            if(temp==6 || temp==13 || temp==20 || temp==27 || temp%7==0) res--;
        }
        cout<<res<<endl;
	}
	return 0;
}