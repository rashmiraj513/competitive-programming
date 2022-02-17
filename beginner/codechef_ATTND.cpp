#include<iostream>
#include<map>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n; string name[n][2];
        map<string, int> res;
        for(int i=0;i<n;i++) {
            cin>>name[i][0]>>name[i][1];
            res[name[i][0]]++;
        }
        for(int i=0;i<n;i++) {
            if(res[name[i][0]]>1) cout<<name[i][0]<<" "<<name[i][1]<<endl;
            else cout<<name[i][0]<<endl;
        }
    }
    return 0;
}
