#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int coins; cin>>coins;
        int sum=0, height=0, neededCoins=1;
        while((sum+neededCoins)<=coins) {
            sum+=neededCoins; neededCoins++; height++;
        }
        cout<<height<<endl;
    }
    return 0;
}