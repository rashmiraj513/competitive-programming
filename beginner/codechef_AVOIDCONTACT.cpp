#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int x, y; cin>>x>>y;
        if(x>y) cout<<y*2+x-y<<endl;
        else if(x==y) cout<<y*2-1<<endl;
	}
	return 0;
}