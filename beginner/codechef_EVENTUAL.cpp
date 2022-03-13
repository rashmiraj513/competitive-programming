#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n; string str; cin>>n>>str;
        if(n%2==1) cout<<"NO\n";
        else {
            int arr[26]={0}, temp=0;
            for(int i=0;i<n;i++) arr[str[i]-'a']++;
            for(int i=0;i<26;i++) {
                if(arr[i]%2!=0) { temp=1; break; }
            }
            temp?cout<<"NO\n":cout<<"YES\n";
        }
	}
	return 0;
}