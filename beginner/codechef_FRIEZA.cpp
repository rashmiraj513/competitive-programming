#include<iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
        string str, pin=""; cin>>str; int good=0, bad=0;
        for(int i=0;i<str.length();i++) {
            if(str[i]=='f' || str[i]=='r' || str[i]=='i' || str[i]=='e' || str[i]=='z' || str[i]=='a') {
                if(bad!=0) {
                    pin+=to_string(bad); bad=0;
                }
                good++;
            } else {
                if(good!=0) {
                    pin+=to_string(good); good=0;
                }
                bad++;
            }
        }
        pin+=bad==0?to_string(good):to_string(bad);
        cout<<pin<<endl;
	}
	return 0;
}