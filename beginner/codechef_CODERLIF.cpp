#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int arr[30];
        for(int i=0; i<30; i++) cin>>arr[i];
        int res=0, mx=0;
        for(int i=0; i<30; i++) {
            if(arr[i]==1) {
                res++; mx=max(mx, res);
            } else res=0;
        }
        if(mx<=5) cout<<"#allcodersarefun\n";
        else cout<<"#coderlifematters\n";
    }
    return 0;
}