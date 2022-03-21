#include<iostream>
using namespace std;
long long evenSumTillN(int n) {
    if(n%2!=0) n-=1;
    long long sum=0;
    for(int i=2;i<=n;i+=2) sum+=i;
    return sum;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        cout<<evenSumTillN(n)<<endl;
    }
    return 0;
}