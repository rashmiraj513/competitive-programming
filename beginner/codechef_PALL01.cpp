#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, rev=0;
        cin>>n;
        int num=n;
        while(n>0) {
            rev=rev*10+(n%10);
            n/=10;
        }
        rev==num?cout<<"wins"<<endl:cout<<"loses"<<endl;
    }
    return 0;
}