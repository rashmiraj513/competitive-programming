#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, x; cin>>n>>x; int sum=x;
        for(int i=0;i<n;i++) {
            int temp; cin>>temp; x+=temp; sum=max(sum, x);
        }
        cout<<sum<<endl;
	}
	return 0;
}