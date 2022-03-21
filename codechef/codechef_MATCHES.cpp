#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    int matches[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while(t--) {
        int a, b; cin>>a>>b; int temp=a+b, sum=0;
        while(temp>0) {
            sum+=matches[temp%10];
            temp/=10;
        }
        cout<<sum<<endl;
    }
}