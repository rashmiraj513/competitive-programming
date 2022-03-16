#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int i, n, x; cin>>n; unordered_set<int> arr;
        for(int i=0;i<n;i++) {
            cin>>x; 
            if(x) arr.insert(x);
        }
        cout<<arr.size()<<endl;
	}
	return 0;
}