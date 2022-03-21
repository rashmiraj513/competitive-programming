#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        float a, b, c, d, res; cin>>a>>b>>c>>d;
        if(c/a==d/b) res=0;
        else if(c/a>d/b) res=1;
        else res=-1;
        cout<<res<<endl;
	}
	return 0;
}