#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int x, y, k; cin>>x>>y>>k;
        (x+y)/k%2?cout<<"Paja\n":cout<<"Chef\n";
	}
	return 0;
}