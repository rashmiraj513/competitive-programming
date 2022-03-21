#include<iostream>
#include<set>
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n, m, c; cin>>n>>m; set<int> s;
        for(int i=0;i<m+n;i++) {
            cin>>c; s.insert(c);
        }
        cout<<(m+n-s.size())<<endl;
    }
    return 0;
}