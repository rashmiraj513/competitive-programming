#include <iostream>
using namespace std;
int main() {
    int n, count=1; cin>>n;
    for(int i=0; i<n;i++) {
        if(i%2==0) {
            for(int j=0; j<5; j++) {
                cout<<count++<<" ";
            }
            count+=4;
        } else if(i%2!=0) {
            for(int j=0; j<5; j++) {
                cout<<count--<<" ";
            }
            count+=6;
        }
        cout<<endl;
    }
    return 0;
}