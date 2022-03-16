#include<iostream>
#define loop for(int i=0;i<n;i++)
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n; int arr[n]; unsigned long long int c1=0, c2=0;
		loop { cin>>arr[i]; arr[i]>0?c1++:c2++; }
		if(c1>0 && c2>0) cout<<max(c1,c2)<<" "<<min(c1,c2)<<endl;
        if(c1==0 || c2==0) cout<<max(c1,c2)<<" "<<max(c1, c2)<<endl;
	}
	return 0;
}