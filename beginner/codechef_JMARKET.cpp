#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int x, arr[3]; cin>>x>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3); cout<<arr[0]*(x-1)+arr[1]<<endl;
    }
	return 0;
}