#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        string arr[]={"North", "East", "South", "West"};
        int n; cin>>n; cout<<arr[n%4]<<endl;
	}
	return 0;
}