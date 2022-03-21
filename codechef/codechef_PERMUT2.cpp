#include <iostream>
using namespace std;
int main() {
    while(1) {
        int n, flag=0; cin>>n; 
        if(!n) break;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) {
            if(i+1!=arr[arr[i]-1]) {
                flag=-1;
                break;
            }
        }
        flag?cout<<"not ambiguous\n":cout<<"ambiguous\n";
    }
    return 0;
}