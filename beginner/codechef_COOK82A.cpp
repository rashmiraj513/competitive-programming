#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int b, r, m, e; string str;
        for(int i=0;i<4;i++) {
            cin>>str;
            if(str=="Barcelona") cin>>b;
            else if(str=="Malaga") cin>>m;
            else if(str=="Eibar") cin>>e;
            else if(str=="RealMadrid") cin>>r;
        }
        if(b>e && r<m) cout<<"Barcelona\n";
        else cout<<"RealMadrid\n";
    }
	return 0;
}