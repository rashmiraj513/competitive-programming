#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, minMoves=0;
        if(n%5==0) {
            while(n%10==0) {
                n*=2;
                minMoves++;
            }
        }
        else minMoves=-1;
        cout<<minMoves<<endl;
    }
    return 0;
}