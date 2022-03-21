#include <iostream>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
	    int hardness, tensile, grade;
	    double carbon;
	    cin>>hardness>>carbon>>tensile;
	    if(hardness>50 && carbon<0.7 && tensile>5600) grade=10;
	    else if(hardness>50 && carbon<0.7 && tensile<=5600) grade=9;
	    else if(hardness<=50 && carbon<0.7 && tensile>5600) grade=8;
	    else if(hardness>50 && carbon>=0.7 && tensile>5600) grade=7;
	    else if(hardness>50 || carbon<0.7 || tensile>5600) grade=6;
	    else grade=5;
	    cout<<grade<<endl;
	}
	return 0;
}
