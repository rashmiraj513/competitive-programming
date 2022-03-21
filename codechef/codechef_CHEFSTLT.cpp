#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string first, second; cin>>first>>second;
        int minDifference=0, maxDifference=0, len=first.length();
        for(int i=0; i<len; i++) {
            if(first[i]!=second[i] || first[i]=='?' || second[i]=='?') maxDifference++;
            if(first[i]!=second[i] && first[i]!='?' && second[i]!='?') minDifference++;
        }
        cout<<minDifference<<" "<<maxDifference<<endl;
    }
    return 0;
}