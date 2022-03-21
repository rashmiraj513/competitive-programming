#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, v1, v2; cin>>n>>v1>>v2;
        float stairs=n*sqrt(2), elevator=2*n;
        stairs/=v1; elevator/=v2;
        if(stairs>=elevator) cout<<"Elevator\n";
        else cout<<"Stairs\n";
    }
    return 0;
}