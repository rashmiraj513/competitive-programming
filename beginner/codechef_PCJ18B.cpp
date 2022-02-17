#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; int total=0, temp;
        if(n%2==0) temp=2;
        else temp=1;
        for(int i=temp;i<=n;i+=2) total+=(i*i);
        cout<<total<<endl;
    }
    return 0;
}