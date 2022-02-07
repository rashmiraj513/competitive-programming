#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int temp=n;
    unsigned long long int sumOfEven=0, sumOfOdd=0;
    for(int i=1;n--;i=i+2) sumOfOdd+=i;
    for(int i=2;temp--;i=i+2) sumOfEven+=i;
    cout<<sumOfOdd<<" "<<sumOfEven<<endl;
    return 0;
}