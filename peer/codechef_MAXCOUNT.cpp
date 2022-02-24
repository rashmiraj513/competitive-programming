#include<iostream>
#include<algorithm>
#include<map>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
void solve() {
    int n; cin>>n; map<int, int> m;
    loop(i, n) {
        int temp; cin>>temp; m[temp]++;
    }
    int mx=0, ind=0;
    for(auto &p:m) {
        if(p.second>mx) {
            ind=p.first; mx=p.second;
        }
    }
    cout<<ind<<" "<<mx<<endl;
}
int main() {
    int t; cin>>t;
    while (t--) solve();
    return 0;
}