#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, laddu=0; string country; cin>>n>>country;
        while(n--) {
            string subtask; cin>>subtask;
            if(subtask=="CONTEST_WON") {
                int rank; cin>>rank;
                if(rank>20) laddu+=300;
                else laddu+=(300+20-rank);
            } else if(subtask=="TOP_CONTRIBUTOR") laddu+=300;
            else if(subtask=="BUG_FOUND") {
                int severity; cin>>severity;
                laddu+=severity;
            } else if(subtask=="CONTEST_HOSTED") laddu+=50;
        }
        country=="INDIAN"?cout<<laddu/200<<endl:cout<<laddu/400<<endl;
    }
    return 0;
}