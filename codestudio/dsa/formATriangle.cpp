#include<iostream>
#include<vector>
using namespace std;
bool possibleToMakeTriangle(vector<int> &arr) {

}
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        bool flag=possibleToMakeTriangle(arr);
        flag?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}