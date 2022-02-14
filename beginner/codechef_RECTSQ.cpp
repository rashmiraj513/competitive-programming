#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int l, b; cin>>l>>b; 
        long long int area=l*b;
        int side=__gcd(l, b);
        cout<<area/side/side<<endl;        
    }
    return 0;
}