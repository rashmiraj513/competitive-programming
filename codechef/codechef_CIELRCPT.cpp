#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, totalMenu=0;
        cin>>n;
        for(int i=11;i>=0;i--) {
            int menuPower=pow(2, i);
            while(n>=menuPower) {
                n-=menuPower;
                totalMenu++;
            }
        }
        cout<<totalMenu<<endl;
    }
    return 0;
}