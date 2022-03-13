#include<iostream>
#define loop for(int i=0;i<26;i++)
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int arr[26], temp[26]={0}; loop cin>>arr[i];
        string str; cin>>str; int n=str.size(), res=0;
        for(int i=0;i<n;i++) temp[str[i]-'a']++;
        loop if(temp[i]==0) res+=arr[i];
        cout<<res<<endl;
	}
	return 0;
}