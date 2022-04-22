#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n%5==0) {
            int a=10, b=5;
            a=n/a; 
            int s=n%10; b=s/b;
            cout<<a+b<<endl;
        } else cout<<-1<<endl;
    }
	return 0;
}