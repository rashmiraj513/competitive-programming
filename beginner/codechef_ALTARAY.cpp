#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; vector<int> num(n, 0);
        vector<int>res(n, 1);
        for(int i=0; i<n; i++) cin>>num[i];
        for(int i=n-2;i>=0;i--) {
            if((num[i]>=0 && num[i+1]<0) || (num[i+1]>=0 && num[i]<0)) res[i]=res[i]+res[i+1];
        }
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}