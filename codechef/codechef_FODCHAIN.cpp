#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        int e, k, temp=0; cin>>e>>k;
        while(e) {
            e=floor(e/k); temp++;
        }
        cout<<temp<<endl;
	}
	return 0;
}