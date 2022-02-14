#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string n; cin>>n; int size=n.size();
        int numberOfZeros=0, numberOfOnes=0;
        for(int i=0;i<size;i++) {
            if(n[i]=='0') numberOfZeros++;
            else numberOfOnes++;
        }
        if(numberOfZeros==1 || numberOfOnes==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}