#include<iostream>
#include<map>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int n, x; cin>>n>>x; int res=-1;
        while(n--) {
            int s, r; cin>>s>>r; 
            if(s<=x) res=max(res, r);
        }
        cout<<res<<endl;
	}
	return 0;
}