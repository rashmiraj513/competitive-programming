#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        int total=0;
        for(int i=0; i<n; i++) {
            int minute, speed; cin>>minute>>speed;
            if(minute>k) {
                minute-=k; k=0; total+=minute*speed;
            }
            if(k>=minute) k-=minute;
        }
        cout<<total<<endl;
    }
    return 0;
}