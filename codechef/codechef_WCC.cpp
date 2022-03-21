#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int points=0, x, prize; cin>>x; string str; cin>>str;
        for(int i=0;i<14;i++) {
            if(str[i]=='C') points+=2;
            else if(str[i]=='D') points+=1;
            else points+=0;
        }
        if(points==14) prize=55*x;
        else if(points>14) prize=60*x;
        else prize=40*x;
        cout<<prize<<endl;
    }
	return 0;
}