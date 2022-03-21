#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string color; cin>>color;
        int amber=0, brass=0;
        for(int i=0;i<color.length();i++) {
            if(color[i]=='a') amber++;
            else brass++;
        }
        cout<<min(amber, brass)<<endl;
    }
    return 0;
}