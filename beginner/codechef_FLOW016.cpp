#include <iostream>
using namespace std;

// Function to calculate GCD...
int gcd(unsigned long long int x, unsigned long long int y) {
    if(y!=0) return gcd(y, x%y);
    return x;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        unsigned long long int a, b, lcm;
        int hcf;
        cin>>a>>b;
        hcf=gcd(a, b);
        lcm=a*b/hcf;
        cout<<hcf<<" "<<lcm<<endl;
    }
	return 0;
}
