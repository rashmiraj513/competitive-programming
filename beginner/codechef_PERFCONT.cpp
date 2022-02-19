#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        int n, p; cin>>n>>p; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        int hard=0, cakewalk=0;
        for(int i=0;i<n;i++) {
            if(arr[i]>=p/2) cakewalk++;
            if(arr[i]<=p/10) hard++;
        }
        if(hard==2 && cakewalk==1) cout<<"yes\n";
        else cout<<"no\n";
    }
	return 0;
}