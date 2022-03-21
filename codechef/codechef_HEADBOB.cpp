#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int n, countIndian=0, countForeigners=0;
	    cin>>n;
	    char gestures[n];
	    for(int i=0;i<n;i++) cin>>gestures[i];
	    for(int i=0;i<n;i++) {
	        if(gestures[i]=='I') countIndian++;
	        else if(gestures[i]=='Y') countForeigners++;
	    }
	    if(countForeigners>0) cout<<"NOT INDIAN\n";
	    else if(countIndian>0) cout<<"INDIAN\n";
	    else cout<<"NOT SURE\n";
	}
	return 0;
}