#include<iostream>
using namespace std;
int main() {
    int t, maxLead=0, winner, diff, ts_1=0, ts_2=0, temp;
    cin>>t;
    while(t--) {
        int player_1, player_2;
        cin>>player_1>>player_2;
        ts_1 += player_1;
        ts_2 += player_2;
        if(ts_1 > ts_2) {
            diff = ts_1-ts_2;
            temp = 1;
        } else {
            diff = ts_2-ts_1;
            temp=2;
        }
        if(diff>maxLead) {
            maxLead=diff;
            winner=temp;
        }
    }
    cout<<winner<<" "<<maxLead<<endl;
    return 0;
}