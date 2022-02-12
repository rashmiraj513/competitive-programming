#include<iostream>
using namespace std;
int numberOfDigits(int x) {
    int digits=0;
    while(x>0) {
        digits++; x/=10;
    }
    return digits;
}
int main() {
    int n; cin>>n;
    int digits = numberOfDigits(n), res;
    if(digits>3) cout<<"More than 3 digits\n";
    else cout<<digits<<endl;
    return 0;
}