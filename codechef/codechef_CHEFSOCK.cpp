#include<iostream>
using namespace std;
int main() {
	int a, b, c; cin>>a>>b>>c;
    (c-a)/b%2?cout<<"Unlucky Chef\n":cout<<"Lucky Chef\n";
	return 0;
}