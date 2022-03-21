#include<iostream>
using namespace std;
int main() {
    int r, o, c; cin>>r>>o>>c;
    c+=(20-o)*36;
    if(r>=c) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}   