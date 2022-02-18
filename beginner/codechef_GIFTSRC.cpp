#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n; string str; cin>>str;
	    int x=0, y=0;
        if(str[0]=='L') x--;
        if(str[0]=='R') x++;
        if(str[0]=='U') y++;
        if(str[0]=='D') y--;
        for(int i=1; i<n; i++) {
            if(str[i]=='L') {
                if(str[i-1]!='L' && str[i-1]!='R') x--;
            }
            if(str[i]=='R') {
                if(str[i-1]!='L' && str[i-1]!='R') x++;
            }
            if(str[i]=='U') {
                if(str[i-1]!='U' && str[i-1]!='D') y++;
            }
            if(str[i]=='D') {
                if(str[i-1]!='U' && str[i-1]!='D') y--;
            }
        }
        cout<<x<<" "<<y<<endl;
	}
	return 0;
}