#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; string str; cin>>n>>str;
        sort(str.begin(), str.end());
        cout<<str<<endl;
    }
	return 0;
}