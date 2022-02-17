#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int count=0;
        while(n--) {
            int submissionTime, verdictTime; cin>>submissionTime>>verdictTime;
            if(abs(verdictTime-submissionTime)>5) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}