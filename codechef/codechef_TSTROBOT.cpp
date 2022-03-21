#include<iostream>
#include<set>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        set<int> temp;
        int n, x; cin>>n>>x; temp.insert(x);
        for(int i=0;i<n;i++) {
            char ch; cin>>ch;
            ch=='L'?x--:x++;
            temp.insert(x);
        }
        cout<<temp.size()<<endl;
	}
	return 0;
}