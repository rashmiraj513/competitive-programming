#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string first, second; cin>>first>>second;
        int len = first.length(), count=0;
        for(int i=0; i<len; i++) {
            if(first[i]==second[i]) count++;
            else if(first[i]=='?' || second[i]=='?') {
                count++; continue;
            }
        }
        if(len==count) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}