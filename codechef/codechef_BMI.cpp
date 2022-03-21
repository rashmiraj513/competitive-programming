#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int m, h, bmi, res; cin>>m>>h; bmi=m/h/h;
        if(bmi<=18) res=1;
        else if(bmi>=19 && bmi<=24) res=2;
        else if(bmi>=25 && bmi<=29) res=3;
        else if(bmi>=30) res=4;
        cout<<res<<endl;
    }
	return 0;
}