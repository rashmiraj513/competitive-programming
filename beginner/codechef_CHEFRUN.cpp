#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c, d, e; cin>>a>>b>>c>>d>>e;
        float chef=(float)abs(c-a)/d, kefa=(float)abs(c-b)/e;
        if(chef<kefa) cout<<"Chef\n";
        else if(kefa<chef) cout<<"Kefa\n";
        else cout<<"Draw\n";
    }
    return 0;
}