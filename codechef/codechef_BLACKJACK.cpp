#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int a, b; cin>>a>>b; int temp=21-a-b;
	    temp>10?cout<<-1<<endl:cout<<temp<<endl;
	}
	return 0;
}