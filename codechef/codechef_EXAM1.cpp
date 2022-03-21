#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, ans=0; string s, u; cin>>n>>s>>u;
        for(int i=0;i<n;i++) {
            if(s[i]==u[i]) ans++;
            else {
                if(u[i]=='N') continue;
                else i++;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}