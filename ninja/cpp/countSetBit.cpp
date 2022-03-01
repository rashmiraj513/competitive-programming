#include<iostream>
using namespace std;
int countBits(int n) {
    int res=0;
    while(n>0) {
        int rem=n%2; n/=2;
        if(rem==1) res++;
    }
    return res;
}
int main() {
    int n; cin>>n;
    cout<<countBits(n);
    return 0;
}