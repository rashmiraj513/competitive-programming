#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        cout<<(m-1)+(2*m-1)*(n-1)<<endl;
    }
    return 0;
}