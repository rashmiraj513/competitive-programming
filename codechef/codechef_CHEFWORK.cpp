#include<iostream>
#define loop for(int i=0;i<n;i++)
using namespace std;
int main() {
	int n; cin>>n; int arr[n], cost[n];
    loop cin>>cost[i];
    loop cin>>arr[i];
    int a=1e7, b=1e7, c=1e7;
    loop {
        if(arr[i]==1) a=min(a, cost[i]);
        else if(arr[i]==2) b=min(b, cost[i]);
        else c=min(c, cost[i]);
    }
    cout<<min(a+b, c)<<endl;
	return 0;
}