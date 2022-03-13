#include<iostream>
using namespace std;
int sum_of_digits(int x) {
    int sum=0;
    while(x!=0) {
        sum+=x%10; x/=10;
    }
    return sum;
}
int main() {
	int t; cin>>t;
	while(t--) {
        int n, a=0, b=0; cin>>n;
        while(n--) {
            int c, d;cin>>c>>d;
            if(sum_of_digits(c)==sum_of_digits(d)) { a++; b++; }
            else if(sum_of_digits(c)>sum_of_digits(d)) a++;
            else b++;
        }
        if(a==b) cout<<2<<" "<<a<<endl;
        else if(a>b) cout<<0<<" "<<a<<endl;
        else cout<<1<<" "<<b<<endl;
	}
	return 0;
}