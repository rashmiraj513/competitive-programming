#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, x; cin>>n>>x; int mn=999, sum=0;
        for(int i=0;i<n;i++) {
            int temp; cin>>temp; 
            mn=min(mn, temp); sum+=temp;
        }
        sum/x==(sum-mn)/x?cout<<-1<<endl:cout<<sum/x<<endl;
	}
	return 0;
}