#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c; cin>>a>>b>>c; cout<<min(a, c/b)<<endl;
    }
    return 0;
}