#include<iostream>
using namespace std;
int main() {
    int n; cin>>n; int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int item; cin>>item; int loc=-1;
    for(int i=n-1; i>=0; i--) if(arr[i]==item) { loc=i; break; }
    cout<<loc<<endl;
    return 0;
}