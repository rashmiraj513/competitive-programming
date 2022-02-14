#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int m, k, n; cin>>n>>m>>k;
        int ignored[m], tracked[k], res[n+1];
        for(int i=1;i<=n;i++) res[i]=0;
        for(int i=0;i<m;i++) cin>>ignored[i];
        for(int i=0;i<k;i++) cin>>tracked[i];
        for(int i=0;i<m;i++) res[ignored[i]]++;
        for(int i=0;i<k;i++) res[tracked[i]]++;
        int res1=0, res2=0;
        for(int i=1;i<=n;i++) {
            if(res[i]>1) res1++;
            if(res[i]==0) res2++;
        }
        cout<<res1<<" "<<res2<<endl;
    }
    return 0;
}