#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
    while(t--) {
        string str; cin>>str; int n=str.size();
        int holes=0;
        for(int i=0; i<n; i++) {
            if(str[i]=='A' || str[i]=='D' || str[i]=='O' || str[i]=='P' || str[i]=='R' || str[i]=='Q') holes+=1;
            else if(str[i]=='B') holes+=2;
        }
        cout<<holes<<endl;
    }
	return 0;
}