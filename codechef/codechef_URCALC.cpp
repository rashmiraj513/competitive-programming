#include<bits/stdc++.h>
using namespace std;
int main() {
    double a, b, res; char c; cin>>a>>b>>c;
    switch(c) {
        case '+': {
            cout<<a+b<<endl; break;
        } case '-': {
            cout<<a-b<<endl; break;
        } case '*': {
            cout<<a*b<<endl; break;
        } case '/': {
            res=a/b; cout<<fixed<<setprecision(6)<<res<<endl; break;
        }
    }
    return 0;
}