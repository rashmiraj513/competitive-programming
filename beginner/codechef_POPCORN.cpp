#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long int a1, a2, b1, b2, c1, c2, sum=0; cin>>a1>>a2>>b1>>b2>>c1>>c2;
        sum=a1+a2;
        if(sum<(b1+b2)) sum=b1+b2;
        if(sum<(c1+c2)) sum=c1+c2;
        cout<<sum<<endl;
    }
	return 0;
}