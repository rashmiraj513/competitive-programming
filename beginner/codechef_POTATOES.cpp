#include<iostream>
#include<cmath>
using namespace std;
int nextPrime(int a) {
    int nextPrimeNumber; a+=1;
    while(1) {
        int res=1;
        for(int i=2;i<=sqrt(a);i++) {
            if(a%i==0) {
                res=0; break;
            }
        }
        if(res==1) {
            nextPrimeNumber=a;
            break;
        }
        else a=a+1;
    }
    return nextPrimeNumber;
}

int main() {
    int t; cin>>t;
    while(t--) {
        int x, y; cin>>x>>y;
        int temp=x+y, nextPrimeNumber;
        nextPrimeNumber=nextPrime(temp);
        cout<<nextPrimeNumber-temp<<endl;
    }
    return 0;
}