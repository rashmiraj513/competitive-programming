#include<iostream>
#include<vector>
using namespace std;
vector<char> getAlienLanguage(string *dictionary, int n) {

}
int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n; string arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        vector<char> res=getAlienLanguage(arr, n);
        for(auto x:res) cout<<x<<endl;
    }
    return 0;
}