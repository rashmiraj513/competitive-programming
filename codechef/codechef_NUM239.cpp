#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int a, b, res=0; cin>>a>>b;
        for(int i=a;i<=b;i++) {
            if(i%10==2 || i%10==3 || i%10==9) res++;
        }
        cout<<res<<endl;
	}
	return 0;
}