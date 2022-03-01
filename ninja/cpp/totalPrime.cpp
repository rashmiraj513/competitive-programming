#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n) {
    int res=1;
    if(n<2) res=0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) { res=0; break; }
    }
    return res;
}
int totalPrime(int start, int end) {
    int res=0;
    for(int i=start;i<=end;i++) if(isPrime(i)) res++;
    return res;
}
int main() {
    int S, E; cin>>S>>E;
    cout<<totalPrime(S, E);
    return 0;
}