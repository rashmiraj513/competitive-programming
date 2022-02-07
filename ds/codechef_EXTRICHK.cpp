#include <iostream>
using namespace std;
int main() {
	int a, b, c, res; cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)) {
        if(a==b && b==c && a==c) res=1;
        else if(a!=b && b!=c && a!=c) res=3;
        else res=2;
    } else res=-1;
    cout<<res<<endl;
	return 0;
}