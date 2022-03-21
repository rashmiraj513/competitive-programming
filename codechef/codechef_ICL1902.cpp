#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, circles=0; cin>>n;
        while(n!=0) {
            int temp=sqrt(n); n-=temp*temp;
            circles++;
        }
        cout<<circles<<endl;        
    }
    return 0;
}