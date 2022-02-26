#include<iostream>
#include<vector>
using namespace std;
long long int numOfPairs(vector<int> &arr) {
    long long int count=0;
    for(int i=0; i<arr.size(); i++) {
        for(int j=i+1; j<arr.size(); j++) {
           // if()
        }
    }
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; vector<int> arr;
        for(int i=0; i<n; i++) cin>>arr[i];
        cout<<numOfPairs(arr)<<endl;
    }
    return 0;
}