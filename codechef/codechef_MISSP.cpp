#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t; vector<int> final;
    while(t--) {
        int n; cin>>n; int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        // vector<int> temp;
        for(int i=0;i<n;) {
            if(arr[i]==arr[i+1]) i+=2;
            else {
                final.push_back(arr[i]); i++;
            }
        }
        // for(int i:temp) final.push_back(i);
    }
    for(int i:final) cout<<i<<endl;
    return 0;
}