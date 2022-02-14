#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int limak, bob; cin>>limak>>bob; int candies=1;
        string winner;
        while(1) {
            if(limak>=candies) limak-=candies;
            else {
                winner="Bob"; break;
            }
            candies++;
            if(bob>=candies) bob-=candies;
            else {
                winner="Limak"; break;
            }
            candies++;
        }
        cout<<winner<<endl;
    }
    return 0;
}