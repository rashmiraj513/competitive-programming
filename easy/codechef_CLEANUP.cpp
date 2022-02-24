#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int> v(n+1, 1);
        for(int i=0; i<k; i++) {
            int temp; cin>>temp;
            v[temp]=0;
        }
        vector<int> w;
        for(int i=1; i<=n; i++) {
            if(v[i]==1) w.push_back(i);
        }
        for(int i=0; i<w.size(); i+=2) cout<<w[i]<<endl;
        for(int i=1;i<w.size(); i+=2) cout<<w[i]<<endl;
        cout<<endl;
    }
	return 0;
}