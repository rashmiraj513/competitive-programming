#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int minions, k, res=0; cin>>minions>>k; int arr[minions];
        for(int i=0; i<minions; i++) cin>>arr[i];
        for(int i=0; i<minions; i++) if((arr[i]+k)%7==0) res++;
        cout<<res<<"\n";
    }
    return 0;
}