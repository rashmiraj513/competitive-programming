#include<iostream>
#include<vector>
#include<map>
using namespace std;
void solve() {
    int n, k, l; cin>>n>>k;
    vector<string> oldLanguage(n);
    map<string, bool> newLanguage;
    string s; 
    for(int i=0; i<n; i++) {
        cin>>s;
        oldLanguage[i]=s; newLanguage[s]=false;
    }
    while(k--) {
        cin>>l; 
        while(l--) {
            cin>>s; newLanguage[s]=true;
        }
    }
    for(int i=0; i<n; i++) {
        if(newLanguage[oldLanguage[i]]) cout<<"YES ";
        else cout<<"NO ";
    }
    cout<<"\n";
}
int main() {
    int t; cin>>t; 
    while(t--) solve();
    return 0;
}