#include<iostream>
#define loop(i, n) for(int i=0;i<n;i++)
using namespace std;
int main() {
    int t; cin>>t;
    while (t--) {
        int n, k; cin>>n>>k; int arr[n];
        loop(i, n) cin>>arr[i]; int sum=0, num=0;
        loop(i, n) sum+=arr[i];
        for(int i=0;i<k;i++) {
            num=sum+1; sum+=num;
        }
        (num%2==0)?cout<<"even\n":cout<<"odd\n";
    }
    return 0;
}