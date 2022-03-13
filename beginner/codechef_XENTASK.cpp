#include<iostream>
#define loop for(int i=0;i<n;i++)
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int first[n], second[n];
        loop cin>>first[i];
        loop cin>>second[i];
        int firstTime=0, secondTime=0;
        loop {
            if(i%2==0) { firstTime+=first[i]; secondTime+=second[i]; }
            else { secondTime+=first[i]; firstTime+=second[i]; }
        }
        cout<<min(firstTime, secondTime)<<endl;
	}
	return 0;
}