#include<iostream>
using namespace std;
int main() {
	int n, c=0, d=0; cin>>n;
    for(int i=0;i<n;i++) {
        int temp; cin>>temp;
        if(temp!=0) { c++; d=max(c, d); }
        else { d=max(c, d); c=0; }
    }
    cout<<d<<endl;
	return 0;
}