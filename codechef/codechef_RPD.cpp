#include<iostream>
using namespace std;
int sum_of_digits(long long n) {
    int sum=0;
    while(n>0) {
        sum+=(n%10); n/=10;
    }
    return sum;
}
int main() {
    int t; cin>>t;
    while(t--) {
        int n, sumOfDigits=0; cin>>n; int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                long long product=arr[i]*arr[j];
                sumOfDigits=max(sumOfDigits, sum_of_digits(product));
            }
        }
        cout<<sumOfDigits<<endl;
    }
    return 0;
}