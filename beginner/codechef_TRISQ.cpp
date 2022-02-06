#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int base, area, numberOfSquares;
        cin>>base;
        if(base==1||base==2||base==3) numberOfSquares=0;
        if(base%2!=0) base=base-1;
        area=0.5*base*base;
        numberOfSquares=(area-base)/4;
        cout<<numberOfSquares<<endl;
    }
    return 0;
}