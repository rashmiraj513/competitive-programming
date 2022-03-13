#include<iostream>
#define loop for(int i=0;i<n;i++)
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; cin>>n; int first[n], second[n];
        loop cin>>first[i];
        loop cin>>second[i];
        int temp=0, i=0; string res="none\n";
        for(;i<n;i++) {
            if(first[i]>second[i]) break;
            else continue;
        }
        if(i==n) { res="front\n"; temp++; }
        i=0;
        for(;i<n;i++) {
            if(first[i]>second[n-i-1]) break;
            else continue;
        }
        if(i==n) { res="back\n"; temp++; }
        if(temp==2) res="both\n";
        cout<<res;
	}
	return 0;
}