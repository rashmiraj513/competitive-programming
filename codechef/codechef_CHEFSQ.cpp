#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int seqArr[n];
        for(int i=0;i<n;i++) cin>>seqArr[i];
        int m; cin>>m; int subSeqArr[m];
        for(int i=0;i<m;i++) cin>>subSeqArr[i];
        int temp=0, flag=0;
        for(int i=0;i<m;i++) {
            for(int j=flag;j<n;j++) {
                if(subSeqArr[i]==seqArr[j]) {
                    temp++; flag=j+1; break;
                }
            }
        }
        temp==m?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}