#include<iostream>
using namespace std;
long long int sumOrProduct(long long int n, long long int q) {
    long long int answer=0, mod=1e9+7;
    if(q==1) answer=(n*(n+1)/2);
    else {
        answer=1;
        for(int i=1;i<=n;i++) answer=(answer*i)%mod;
    }
    return answer;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n, q; cin>>n>>q;
        cout<<sumOrProduct(n, q)<<endl;
    }
    return 0;
}   