#include<iostream>
using namespace std;
unsigned long long int fact(unsigned long long int x) {
    unsigned long long int res=5, zero=0;
    while(x/res) {
        zero+=(x/res);
        res*=5;
    }
    return zero;
}
int main() {
    int t; cin>>t;
    while(t--) {
        unsigned long long int n, res=0; cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}