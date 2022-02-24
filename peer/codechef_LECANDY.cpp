#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        int n, c; cin>>n>>c; int arr[n]; int sum=0;
        for(int i=0; i<n; i++) {
            cin>>arr[i]; sum+=arr[i];
        }
        (c>=sum)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
	return 0;
}