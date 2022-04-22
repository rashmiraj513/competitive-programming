#include<iostream>
using namespace std;
#define loop for(int i = 0;i<n;i++)
int main() {
    int t; cin>>t;
    while(t--) {
        int n, res=0; cin>>n; int first[n], second[n];
        loop cin>>first[i];
        loop cin>>second[i];
        loop if(first[i]==second[i]) res++;
        cout<<res<<endl;
    }
	return 0;
}