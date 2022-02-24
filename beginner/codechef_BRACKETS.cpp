#include<iostream>
#define loop(i, n) for(int i=0;i<n;i++)
#define loopS(i, n) for(int i=0;i<maxBal;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        string str; cin>>str; int n=str.size();
        int bal=0, maxBal=0;
        loop(i, n) {
            if(str[i]=='(') ++bal;
            else --bal;
            maxBal=max(maxBal, bal);
        }
        loopS(i, n) cout<<"(";
        loopS(i, n) cout<<")";
        cout<<endl;
    }
    return 0;
}