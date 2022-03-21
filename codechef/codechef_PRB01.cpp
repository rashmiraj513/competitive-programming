#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, temp=0;
        cin>>n;
        if(n==1) {
            cout<<"no\n";
        } else {
            for(int i=2;i<n;i++) {
                if(n%i==0) {
                    temp++;
                    break;
                }
            }
            temp==0?cout<<"yes\n":cout<<"no\n";
        }
    }
    return 0;
}