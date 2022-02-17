#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int alice[n]; int bob[n];
        for(int i=0; i<n; i++) cin>>alice[i];
        for(int i=0; i<n; i++) cin>>bob[i];
        int total_alice=0, total_bob=0;
        int max_alice=*max_element(alice, alice+n);
        int max_bob=*max_element(bob, bob+n);
        for(int i=0; i<n; i++) {
            total_alice+=alice[i]; total_bob+=bob[i];
        }
        total_alice-=max_alice; total_bob-=max_bob;
        if(total_alice>total_bob) cout<<"Bob\n";
        else if(total_alice<total_bob) cout<<"Alice\n";
        else cout<<"Draw\n";
    }
    return 0;
}