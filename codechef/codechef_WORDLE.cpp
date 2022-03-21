#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string res, ans, temp=""; cin>>res>>ans;
        for(int i=0;i<5;i++) {
            res[i]==ans[i]?temp+='G':temp+='B';
        }
        cout<<temp<<endl;
    }
	return 0;
}