#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c, d, e, f, first=0, second=0; cin>>a>>b>>c>>d>>e>>f;
        if(a>d) first++;
        else if(d>a) second++;
        if(b>e) first++;
        else if(b<e) second++;
        if(c>f) first++;
        else if(c<f) second++;
        first>second?cout<<"A\n":cout<<"B\n";
    }
	return 0;
}