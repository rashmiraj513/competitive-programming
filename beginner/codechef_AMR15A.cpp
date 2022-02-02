#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++) cin>>arr[i];
    int readySoldier=0, notReadySoldier=0;
    for(int i=0; i<t; i++) {
        if(arr[i]%2==0) readySoldier+=1;
        else notReadySoldier+=1;
    }
    readySoldier>notReadySoldier?cout<<"READY FOR BATTLE"<<endl:cout<<"NOT READY"<<endl;
    return 0;
}