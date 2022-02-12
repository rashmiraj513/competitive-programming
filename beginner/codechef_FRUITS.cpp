#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int apples, oranges, coins; cin>>apples>>oranges>>coins;
        for(int i=0;i<coins;i++) {
            if(apples<oranges) apples++;
            else if(apples>oranges) oranges++;
            else break;
        }
        cout<<abs(apples-oranges)<<endl;
    }
    return 0;
}