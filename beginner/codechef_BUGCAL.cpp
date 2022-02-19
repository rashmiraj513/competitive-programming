#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        long long a, b, sum=0; cin>>a>>b; int n=1;
        while(a>0 || b>0) {
            int temp=(a%10+b%10)%10;
            sum+=temp*n; a/=10; b/=10; n*=10;
        }
        cout<<sum<<endl;
    }
	return 0;
}